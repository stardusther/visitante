/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include <iostream>

#include "visitantePrecioDetalle.hpp"
#include "bus.hpp"
#include "disco.hpp"
#include "tarjeta.hpp"

void visitantePrecioDetalle::visitarBus(const bus *element) const {
    cout << "Bus: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}

void visitantePrecioDetalle::visitarDisco(const disco *element) const {
    cout << "Disco: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}

void visitantePrecioDetalle::visitarTarjeta(const tarjeta *element) const {
    cout << "Tarjeta: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}