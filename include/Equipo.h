#ifndef EQUIPO_H
#define EQUIPO_H

#include "Bus.h"
#include "Disco.h"
#include "Tarjeta.h"

class Equipo{
private:
    Disco un_disco;
    Bus un_bus;
    Tarjeta una_tarjeta;
public:
    Equipo(Bus un_bus, Disco dc, Tarjeta tj);
    void aceptar(const VisitanteEquipo *visitante) const;
};

#endif