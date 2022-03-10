/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */

#include "visitanteEquipo.hpp"

class visitantePrecioDetalle : public visitanteEquipo {
 public:
  void visitarBus(const bus *element) const override;

  void visitarDisco(const disco *element) const override;

  void visitarTarjeta(const tarjeta *element) const override;
};