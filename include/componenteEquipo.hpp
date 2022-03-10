/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#include "visitanteEquipo.hpp"

class componenteEquipo {
public:
    virtual ~componenteEquipo() {}
    virtual void aceptar(visitanteEquipo *visitante) const = 0;
};