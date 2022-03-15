#ifndef COMPONENTEEQUIPO_H
#define COMPONENTEEQUIPO_H

#include "componenteEquipo.hpp"
#include "visitanteEquipo.hpp"
#include <string>

using namespace std;

class componenteEquipo {
private:
    string nombre;
    double precio;
public:
    virtual ~componenteEquipo() {} = default; // destructor
    virtual void aceptar(visitanteEquipo *visitante) const = 0;
    double getPrecio() const;
    string getNombre() const;
protected:
    componenteEquipo(string nom, double price);
};

#endif