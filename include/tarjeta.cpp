/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "tarjeta.hpp"

//Constructor
tarjeta::tarjeta(string nom, double price) : componenteEquipo(nom, price) {}

// Aceptar visitante
void tarjeta::aceptar(visitanteEquipo *visitante) const {
    visitante->visitarTarjeta(*this);
}
