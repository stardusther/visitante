#include "bus.h"

bus::bus(const string &nom, double price) : componenteEquipo(nom, price) {}

void bus::aceptar(const visitanteEquipo *visitante) const {
    visitante->visitarBus(this);
}
