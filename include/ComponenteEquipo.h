#ifndef COMPONENTEEQUIPO_H
#define COMPONENTEEQUIPO_H

#include <string>
class VisitanteEquipo;

using namespace std;

class ComponenteEquipo {
private:
    string nombre;
    double precio;
public:
    virtual ~ComponenteEquipo() = default; // destructor
    virtual void aceptar(const VisitanteEquipo *visitante) const = 0;
    double getPrecio() const;
    string getNombre() const;
protected:
    ComponenteEquipo(string nom, double price);
};

#endif