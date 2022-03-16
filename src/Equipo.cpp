/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include "../include/Equipo.h"

// Constructor
Equipo::Equipo(Bus b, Disco d, Tarjeta t) : un_bus(b), un_disco(d), una_tarjeta(t) {}

void Equipo::aceptar(const VisitanteEquipo * visitante) const {
    un_bus.aceptar(visitante);
    un_disco.aceptar(visitante);
    una_tarjeta.aceptar(visitante);
}