#ifndef VISITANTEPRECIO_H
#define VISITANTEPRECIO_H

#include "VisitanteEquipo.h"
#include "Cliente.h"

class VisitantePrecio : public VisitanteEquipo {
 public:
  void visitarBus(const Bus *element);

  void visitarDisco(const Disco *element);

  void visitarTarjeta(const Tarjeta *element);

  float getTotal() const;
  void setCliente(Cliente client);

private:
    float total_price;
    float discount;
};

#endif