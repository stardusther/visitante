/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include <iostream>
#include "componenteEquipo.h"
#include "visitanteEquipo.h"
#include "visitantePrecio.h"
#include "bus.h"
#include "disco.h"
#include "tarjeta.h"
#include "visitantePrecioDetalle.h"
#include <array>

using namespace std;

int main() {
  array<const componenteEquipo *, 2> components = {new bus, new disco, new tarjeta};

  visitantePrecio *visitor1 = new visitantePrecio;
  cout << "Total: " << visitor1->getTotal() << "€\n";


  visitantePrecioDetalle *visitor2 = new visitantePrecioDetalle;
  visitor2->visitarBus(b);
  visitor2->visitarDisco(d);
  visitor2->visitarTarjeta(t);

  // Eliminamos los componentes del equipo creados
  for (const componenteEquipo *comp : components) {
    delete comp;
  }

  // Eliminamos los visitantes
  delete visitor1;
  delete visitor2;

  return 0;
}