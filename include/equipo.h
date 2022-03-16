#ifndef EQUIPO_H
#define EQUIPO_H

#include "bus.h"
#include "disco.h"
#include "tarjeta.h"

class equipo{
private:
    disco un_disco;
    bus un_bus;
    tarjeta una_tarjeta;
public:
    equipo(bus un_bus, disco dc, tarjeta tj);
    void aceptar(const visitanteEquipo *visitante) const;
};

#endif