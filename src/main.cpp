/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include <iostream>
#include "../include/ComponenteEquipo.h"
#include "../include/VisitanteEquipo.h"
#include "../include/VisitantePrecio.h"
#include "../include/Bus.h"
#include "../include/Disco.h"
#include "../include/Tarjeta.h"
#include "../include/VisitantePrecioDetalle.h"
#include <array>

using namespace std;

int main() {
  array<const ComponenteEquipo *, 2> components = {new Bus, new Disco, new Tarjeta};

  VisitantePrecio *visitor1 = new VisitantePrecio;
  cout << "Total: " << visitor1->getTotal() << "€\n";


  VisitantePrecioDetalle *visitor2 = new VisitantePrecioDetalle;
  visitor2->visitarBus(b);
  visitor2->visitarDisco(d);
  visitor2->visitarTarjeta(t);

  // Eliminamos los componentes del Equipo creados
  for (const ComponenteEquipo *comp : components) {
    delete comp;
  }

  // Eliminamos los visitantes
  delete visitor1;
  delete visitor2;

  return 0;
}