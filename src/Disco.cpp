/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "../include/Disco.h"

// Constructor
Disco::Disco(string nom, double price) : ComponenteEquipo(nom, price) {}

// Aceptar visitante
void Disco::aceptar(const VisitanteEquipo *visitante) const {
    visitante->visitarDisco(this);
 }