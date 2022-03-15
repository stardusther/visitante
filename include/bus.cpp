/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include "bus.hpp"

// Constructor
bus::bus(string nom, double price) : componenteEquipo(nom, price) {}

// Aceptar visitante
void bus::aceptar(visitanteEquipo *visitante) const {
    visitante->visitarBus(*this);
}

