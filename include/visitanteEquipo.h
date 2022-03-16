#include "tarjeta.h"
#include "disco.h"
#include "bus.h"

class bus;

class visitanteEquipo {
  public:
    virtual void visitarBus(const bus *element) const = 0;
    virtual void visitarDisco(const disco *element) const = 0;
    virtual void visitarTarjeta(const tarjeta *element) const = 0;
};