#include "Tarjeta.h"
#include "Disco.h"
#include "Bus.h"

//class Bus;

class VisitanteEquipo {
  public:
    virtual void visitarBus(const Bus *element) const = 0;
    virtual void visitarDisco(const Disco *element) const = 0;
    virtual void visitarTarjeta(const Tarjeta *element) const = 0;
};