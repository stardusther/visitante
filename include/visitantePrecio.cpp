/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include "visitantePrecio.hpp"
#include "bus.hpp"
#include "disco.hpp"
#include "tarjeta.hpp"

// Le quitamos el descuento a cada componente según el tipo de cliente
void visitantePrecio::visitarBus(const bus *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

void visitantePrecio::visitarDisco(const disco *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

void visitantePrecio::visitarTarjeta(const tarjeta *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

float visitantePrecio::getTotal() const {
    return total_price;
}

void visitantePrecio::setCliente(cliente client) {
    if(client == cliente::estudiante)
        discount = 0.1;
    else if(client == cliente::mayorista)
        discount = 0.15;
    else
        discount = 0;

    total_price = 0;
}