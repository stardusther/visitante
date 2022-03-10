/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "tarjeta.hpp"

void aceptar(visitanteEquipo *visitante) const override {
    visitante->visitarTarjeta(this);
}
