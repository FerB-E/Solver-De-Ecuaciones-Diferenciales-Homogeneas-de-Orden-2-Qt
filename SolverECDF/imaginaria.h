#pragma once
#include "raiz.h"
#include <cmath>

class Imaginaria : public Raiz {
    float alpha,beta;
public:
    Imaginaria(Ecuacion e) : Raiz( e ) {
        alpha = (-EcD.b) / (2 * EcD.a);
        beta = std::sqrt(-EcD.discriminante) / (2 * EcD.a);
    }

    std::ostream& imprimir_raices( std::ostream& os ) const override{
        return os << "m₁ = " << alpha << " + " << beta << "i" << " , m₂ = " << alpha << " - " << beta << "i";
    }

    std::ostream& imprimir_resultado( std::ostream& os ) const override {
        return os << "Yc = C_1 * e^(" << alpha << "x) * " << "cos(" << beta << "x) + C_2 * e^(" << alpha << "x) * sen(" << beta << "x)";
    }
};