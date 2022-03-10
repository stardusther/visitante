/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#include "componenteEquipo.hpp"
#include "visitanteEquipo.hpp"

class disco : public componenteEquipo{
    public:
        void aceptar(visitanteEquipo *visitante) const override;

};