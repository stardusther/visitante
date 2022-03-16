/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "disco.h"

// Constructor
disco::disco(string nom, double price) : componenteEquipo(nom, price) {}

// Aceptar visitante
void disco::aceptar(const visitanteEquipo *visitante) const {
    visitante->visitarDisco(this);
 }