/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "../include/Tarjeta.h"

//Constructor
Tarjeta::Tarjeta(string nom, double price) : ComponenteEquipo(nom, price) {}

// Aceptar visitante
void Tarjeta::aceptar(const VisitanteEquipo *visitante) const {
    visitante->visitarTarjeta(this);
}
