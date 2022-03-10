/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/
#include "bus.hpp"
#include "visitanteEquipo.hpp"

void bus::aceptar(visitanteEquipo *visitante) const {
    visitante->VisitConcreteComponentA(this);
}

