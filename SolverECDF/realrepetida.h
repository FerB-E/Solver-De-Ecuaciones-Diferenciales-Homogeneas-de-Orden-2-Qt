#pragma once
#include "raiz.h"

class RealRepetida : public Raiz {
    float r;
public:
    RealRepetida(Ecuacion e) : Raiz( e ) {
        r = (-EcD.b) / (2 * EcD.a);
    }

    std::ostream& imprimir_raices( std::ostream& os ) const override{
        return os << "m₁,₂ = " << r;
    }

    std::ostream& imprimir_resultado( std::ostream& os ) const override {
        return os << "Yc = C_1 * e^(" << r << "x) + C_2 * xe^(" << r << "x)";
    }
};