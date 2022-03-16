/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include "equipo.h"

// Constructor
equipo::equipo(bus b, disco d, tarjeta t) : un_bus(b), un_disco(d), una_tarjeta(t) {}

void equipo::aceptar(const visitanteEquipo * visitante) const {
    un_bus.aceptar(visitante);
    un_disco.aceptar(visitante);
    una_tarjeta.aceptar(visitante);
}