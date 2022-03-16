#ifndef DISCO_H
#define DISCO_H

#include "ComponenteEquipo.h"

/**
 * @author Sandra Reinoso
 * @author Esther Garc?a Gallego
*/

class Disco : public ComponenteEquipo {
public:
    Disco(string nom, double price);
    void aceptar(const VisitanteEquipo *visitante) const override;
};

#endif