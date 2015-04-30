// Incluye el módulo lista
#include <iostream>
#include Elemento

// Se usa una plantilla pues se desconoce el
// tipo de objetos que se usara en ella
template <class T>

namespace ListaPos {

  /*  Clase lista posicionada usando la
      estructura de datos arreglo       */

  // Definimos la posicion como un numero entero positivo
  typedef unsigned int pos;

  // Clase lista posicionada
  class ListaPos{
    private:
      int numero_elementos;
      Elemento prim_elem;
      Elemento ult_elem;
    public:
      // Constructor de la clase
    ListaPos(){
        numero_elementos = 0;
      }


  }

}
