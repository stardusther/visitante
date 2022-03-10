/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "disco.hpp"

void aceptar(visitanteEquipo *visitante) const override {
    visitante->visitarDisco(this);
 }