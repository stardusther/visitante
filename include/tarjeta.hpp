#ifndef TARJETA_H
#define TARJETA_H

/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "componenteEquipo.hpp"

class tarjeta : public componenteEquipo {
public:
    tarjeta(string nom, double price);

    void aceptar(visitanteEquipo *visitante) const override;
};

#endif