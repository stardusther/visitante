#ifndef DISCO_H
#define DISCO_H

#include "componenteEquipo.hpp"

/**
 * @author Sandra Reinoso
 * @author Esther Garc?a Gallego
*/

class disco : public componenteEquipo {
public:
    disco(string nom, double price);

    void aceptar(visitanteEquipo *visitante) const override;
};

#endif