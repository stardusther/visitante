#ifndef BUS_H
#define BUS_H


#include "componenteEquipo.h"

class bus : public componenteEquipo {
public:
    bus(const string &nom, double price);
    void aceptar(const visitanteEquipo *visitante) const override;
};


#endif //VISITANTE_BUS_H
