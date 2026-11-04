#pragma once
#include <algorithm>
#include <cmath>

namespace ngp {
// New additional elasticity, NOT the original model's total spring force.
// x is current wheel-minus-body displacement relative to a qualified rest
// reference, projected onto body up. Body receives +force, wheel -force.
// Caller owns reference, identity/age, force-unit qualification and application.
struct SpringResidual {
    double stiffness_n_m=0.;
    static constexpr double force_cap_n=12.;
    static constexpr double stiffness_cap_n_m=120.;

    static bool finite(double v) { return std::isfinite(v); }
    static double potential(double stiffness,double displacement) {
        if(stiffness==0.) return 0.;
        const double x=std::abs(displacement),limit=force_cap_n/stiffness;
        return x<=limit ? .5*stiffness*x*x : force_cap_n*(x-.5*limit);
    }
    // Changing stiffness while compressed changes stored energy. Increasing
    // stiffness requires externally accounted dissipated work; caller debits
    // energy_cost_j exactly once after accepting the complete reaction pair.
    // Decreasing stiffness dissipates the lost potential, never creates credit.
    bool set_stiffness(double requested,double displacement,double available_j,
                       double& energy_cost_j) {
        energy_cost_j=0.;
        if(!finite(requested)||!finite(displacement)||!finite(available_j)||
           requested<0.||requested>stiffness_cap_n_m||available_j<0.||
           std::abs(displacement)>1.) return false;
        const double cost=std::max(0.,potential(requested,displacement)-
                                      potential(stiffness_n_m,displacement));
        if(cost>available_j) return false;
        stiffness_n_m=requested;energy_cost_j=cost;return true;
    }
    struct Pair { double body_n=0.,wheel_n=0.,potential_j=0.; bool valid=false; };
    Pair evaluate(double displacement,bool units_qualified,bool reference_qualified) const {
        Pair out;
        if(!units_qualified||!reference_qualified||!finite(displacement)||
           std::abs(displacement)>1.||!finite(stiffness_n_m)||
           stiffness_n_m<0.||stiffness_n_m>stiffness_cap_n_m) return out;
        out.body_n=std::clamp(stiffness_n_m*displacement,-force_cap_n,force_cap_n);
        out.wheel_n=-out.body_n;
        out.potential_j=potential(stiffness_n_m,displacement);out.valid=true;return out;
    }
};
}
