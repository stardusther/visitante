/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */

/**
 * @author Sandra Reinoso
 * @author Esther Garc�a Gallego
*/

#include "componenteEquipo.hpp"
#include "visitanteEquipo.hpp"


class tarjeta : public componenteEquipo{
    public:
        void aceptar(visitanteEquipo *visitante) const override;
};