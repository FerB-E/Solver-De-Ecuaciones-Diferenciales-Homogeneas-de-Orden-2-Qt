#pragma once
#include <memory>
#include "ecuacion.h"
#include "raiz.h"

std::unique_ptr<Raiz> TipoRaiz(const Ecuacion& e);