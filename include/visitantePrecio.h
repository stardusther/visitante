#ifndef VISITANTEPRECIO_H
#define VISITANTEPRECIO_H

#include "visitanteEquipo.h"
#include "cliente.h"

class visitantePrecio : public visitanteEquipo {
 public:
  void visitarBus(const bus *element);

  void visitarDisco(const disco *element);

  void visitarTarjeta(const tarjeta *element);

  float getTotal() const;
  void setCliente(cliente client);

private:
    float total_price;
    float discount;
};

#endif