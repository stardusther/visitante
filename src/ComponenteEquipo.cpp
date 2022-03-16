/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include "../include/ComponenteEquipo.h"

// Constructor
ComponenteEquipo::ComponenteEquipo(string nom, double price) {
    nombre = nom;
    precio = price;
}

double ComponenteEquipo::getPrecio() const {
    return precio;
}

string ComponenteEquipo::getNombre() const {
    return nombre;
}


