#include "bus.hpp"
#include "tarjeta.hpp"
#include "disco.hpp"

class visitanteEquipo {
  public:
    virtual void visitarBus(const bus *element) const = 0;
    virtual void visitarDisco(const disco *element) const = 0;
    virtual void visitarTrajeta(const tarjeta *element) const = 0;
};