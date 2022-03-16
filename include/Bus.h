#ifndef BUS_H
#define BUS_H

#include "ComponenteEquipo.h"

class Bus : public ComponenteEquipo {
public:
    Bus(const string &nom, double price);
    void aceptar(const VisitanteEquipo *visitante) const override;
};


#endif
