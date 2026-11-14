#include "tipoRaiz.h"
#include "realUnica.h"
#include "realRepetida.h"
#include "imaginaria.h"

std::unique_ptr<Raiz> TipoRaiz(const Ecuacion& e) {
    if( e.discriminante >0 ){
        return std::make_unique <RealUnica> (e);
    }else if (e.discriminante == 0){
        return std::make_unique <RealRepetida> (e);
    }else{
        return std::make_unique <Imaginaria> (e);
    }
}