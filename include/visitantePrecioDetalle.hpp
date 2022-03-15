#ifndef VISITANTEPRECIODETALLE_H
#define VISITANTEPRECIODETALLE_H

#include "visitanteEquipo.hpp"
#include "cliente.h"

class visitantePrecioDetalle : public visitanteEquipo {
 public:
  void visitarBus(const bus *element) const;

  void visitarDisco(const disco *element) const;

  void visitarTarjeta(const tarjeta *element) const;
};

#endif