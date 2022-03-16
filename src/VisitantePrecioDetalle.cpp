/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include <iostream>

#include "../include/VisitantePrecioDetalle.h"
#include "../include/Disco.h"
#include "../include/Tarjeta.h"

void VisitantePrecioDetalle::visitarBus(const Bus *element) const {
    cout << "Bus: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}

void VisitantePrecioDetalle::visitarDisco(const Disco *element) const {
    cout << "Disco: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}

void VisitantePrecioDetalle::visitarTarjeta(const Tarjeta *element) const {
    cout << "Tarjeta: " << element->getNombre() << " --> " << element->getPrecio() << "€\n";
}