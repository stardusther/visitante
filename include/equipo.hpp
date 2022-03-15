#ifndef EQUIPO_H
#define EQUIPO_H

#include "bus.hpp"
#include "disco.hpp"
#include "tarjeta.hpp"

class equipo{
private:
    disco un_disco;
    bus un_bus;
    tarjeta una_tarjeta;
public:
    equipo(bus un_bus, disco dc, tarjeta tj);
    void aceptar(visitanteEquipo *visitante) const;
};

#endif