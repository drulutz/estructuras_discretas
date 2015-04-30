// Clase elemento, encargada de guardar
// el valor del elemento y su posicion.

using namespace ListaPos;

template <class T>
class Elemento {

  T valor;
  pos posicion;

  public Elemento (T para_valor = NULL, pos para_posicion){
    this->valor = para_valor;
    this->posicion = para_posicion;
  }

  public void modificarElemento(T nuevo_valor){
    this->valor = nuevo_valor;
  }

}
