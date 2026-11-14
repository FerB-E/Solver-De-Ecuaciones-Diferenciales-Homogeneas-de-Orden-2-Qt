#pragma once
#include "ecuacion.h"
#include <ostream>
#include <utility>

class Raiz{
    protected:
        Ecuacion EcD;
    public:
        explicit Raiz(Ecuacion e) : EcD(std::move(e)) {}
        virtual ~Raiz() = default;
        virtual std::ostream& imprimir_raices( std::ostream& os) const = 0;
        virtual std::ostream& imprimir_resultado( std::ostream& os ) const = 0;
};