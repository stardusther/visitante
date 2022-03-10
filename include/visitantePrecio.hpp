#include "visitanteEquipo.hpp"

class visitantePrecio : public visitanteEquipo {
 public:
  void visitarBus(const bus *element) const override;

  void visitarDisco(const disco *element) const override;

  void visitarTarjeta(const tarjeta *element) const override;
};