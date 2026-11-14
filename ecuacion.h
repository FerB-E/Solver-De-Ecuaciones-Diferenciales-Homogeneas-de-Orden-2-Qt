#pragma once

struct Ecuacion {
    float a, b, c;
    float discriminante;

    Ecuacion(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
        discriminante = (b * b) - (4 * a * c);
    }
};