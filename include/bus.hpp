#ifndef BUS_H
#define BUS_H
#include "componenteEquipo.hpp"

class bus : public componenteEquipo {
public:
    bus(string nom, double price);
    void aceptar(visitanteEquipo *visitante) const override;
};

#endif