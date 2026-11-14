#pragma once
#include <ostream>

struct Ecuacion {
    float a, b, c;
    float discriminante;

    Ecuacion(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
        discriminante = (b * b) - (4 * a * c);
    }

    std::ostream& imprimir_pol_caract( std::ostream& os){
        return os << a << "m² + " << b << "m + " << c << " = 0";
    }

};