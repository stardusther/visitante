/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "disco.hpp"

void disco::aceptar(visitanteEquipo *visitante) const {
    visitante->visitarDisco(this);
 }