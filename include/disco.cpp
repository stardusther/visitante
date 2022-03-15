/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "disco.hpp"

// Constructor
disco::disco(string nom, double price) : componenteEquipo(nom, price) {}

// Aceptar visitante
void disco::aceptar(visitanteEquipo *visitante) const {
    visitante->visitarDisco(this);
 }