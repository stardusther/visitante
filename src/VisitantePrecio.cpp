/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include "../include/VisitantePrecio.h"
#include "../include/Bus.h"
#include "../include/Disco.h"
#include "../include/Tarjeta.h"


// Le quitamos el descuento a cada componente según el tipo de Cliente
void VisitantePrecio::visitarBus(const Bus *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

void VisitantePrecio::visitarDisco(const Disco *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

void VisitantePrecio::visitarTarjeta(const Tarjeta *element) {
    total_price += element->getPrecio() - discount * element->getPrecio();
}

float VisitantePrecio::getTotal() const {
    return total_price;
}

void VisitantePrecio::setCliente(Cliente client) {
    if(client == Cliente::estudiante)
        discount = 0.1;
    else if(client == Cliente::mayorista)
        discount = 0.15;
    else
        discount = 0;

    total_price = 0;
}