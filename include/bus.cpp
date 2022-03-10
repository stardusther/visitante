/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/
#include "bus.hpp"

void bus::aceptar(visitanteEquipo *visitante) const override {
    visitante->VisitConcreteComponentA(this);
}

