#ifndef VISITANTEPRECIODETALLE_H
#define VISITANTEPRECIODETALLE_H

#include "visitanteEquipo.h"
#include "cliente.h"

class visitantePrecioDetalle : public visitanteEquipo {
 public:

  void visitarDisco(const disco *element) const;

  void visitarTarjeta(const tarjeta *element) const;

  void visitarBus(const hola *element) const;
};

#endif