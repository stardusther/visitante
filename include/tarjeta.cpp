/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "tarjeta.h"

//Constructor
tarjeta::tarjeta(string nom, double price) : componenteEquipo(nom, price) {}

// Aceptar visitante
void tarjeta::aceptar(const visitanteEquipo *visitante) const {
    visitante->visitarTarjeta(this);
}
