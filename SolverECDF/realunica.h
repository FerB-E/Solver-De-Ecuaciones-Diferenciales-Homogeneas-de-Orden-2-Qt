#pragma once
#include "raiz.h"
#include <cmath>

class RealUnica : public Raiz {
    float r1,r2;
public:
    RealUnica(Ecuacion e) : Raiz( e ) {
        r1 = ((-EcD.b) +std::sqrt(EcD.discriminante)) / (2 * EcD.a);
        r2 = ((-EcD.b) - sqrt(EcD.discriminante)) / (2 * EcD.a);
    }

    std::ostream& imprimir_raices( std::ostream& os ) const override{
        return os << "m₁ = " << r1 << " , m₂ = " << r2;
    }

    std::ostream& imprimir_resultado( std::ostream& os ) const override {
        return os << "Yc = C_1 * e^(" << r1 << "x) + C_2 * e^(" << r2 << "x)";
    }
};