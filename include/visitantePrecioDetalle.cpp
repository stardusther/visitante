/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/
#include "visitantePrecioDetalle.hpp"

void visitarBus(const bus *element) const override{
    td::cout << element->metodo() << " + ConcreteVisitor1\n";
}

void visitarDisco(const disco *element) const override{
    td::cout << element->aceptar() << " + ConcreteVisitor1\n";
}

void visitarTarjeta(const tarjeta *element) const override{
    td::cout << element->aceptar() << " + ConcreteVisitor1\n";
}