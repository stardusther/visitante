/**
 * @author Sandra Reinoso
 * @author Esther García Gallego
*/

#include <iostream>
#include "componenteEquipo.hpp"
#include "visitanteEquipo.hpp"
#include "visitantePrecio.hpp"
#include "bus.hpp"
#include "disco.hpp"
#include "tarjeta.hpp"
#include "visitantePrecioDetalle.hpp"
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