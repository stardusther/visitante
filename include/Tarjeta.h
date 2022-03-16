#ifndef TARJETA_H
#define TARJETA_H

#include "ComponenteEquipo.h"

/**
 * @author Sandra Reinoso
 * @author Esther Garcia Gallego
*/



class Tarjeta : public ComponenteEquipo {
public:
    Tarjeta(string nom, double price);
    void aceptar(const VisitanteEquipo *visitante) const override;
};

#endif