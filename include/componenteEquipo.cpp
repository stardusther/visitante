/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include "componenteEquipo.h"

// Constructor
componenteEquipo::componenteEquipo(string nom, double price) {
    nombre = nom;
    precio = price;
}

double componenteEquipo::getPrecio() const {
    return precio;
}

string componenteEquipo::getNombre() const {
    return nombre;
}


