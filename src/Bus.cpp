/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "../include/Bus.h"

Bus::Bus(const string &nom, double price) : ComponenteEquipo(nom, price) {}

void Bus::aceptar(const VisitanteEquipo *visitante) const {
    visitante->visitarBus(this);
}
