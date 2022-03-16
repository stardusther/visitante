#ifndef VISITANTEPRECIODETALLE_H
#define VISITANTEPRECIODETALLE_H

#include "VisitanteEquipo.h"
#include "Cliente.h"

class VisitantePrecioDetalle : public VisitanteEquipo {
 public:
  void visitarBus(const Bus *element) const;
  void visitarDisco(const Disco *element) const;
  void visitarTarjeta(const Tarjeta *element) const;
};

#endif