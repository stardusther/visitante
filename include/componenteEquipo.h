#ifndef COMPONENTEEQUIPO_H
#define COMPONENTEEQUIPO_H

#include "componenteEquipo.h"
#include "visitanteEquipo.h"
#include <string>

using namespace std;

class componenteEquipo {
private:
    string nombre;
    double precio;
public:
    virtual ~componenteEquipo() {} = default; // destructor
    virtual void aceptar(const visitanteEquipo *visitante) const = 0;
    double getPrecio() const;
    string getNombre() const;
protected:
    componenteEquipo(string nom, double price);
};

#endif