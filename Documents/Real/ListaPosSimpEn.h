#define LISTAOPOSICIONADASimplementeENLAZADA

#include <iostream>
#include <string>

namespace tarea1 {

template <typename DataType> class ListaPosicionadaSimplementeEnlazada {

  typedef unsigned int pos;

private:
    struct Node
    {
    DataType data;
    Node* next;

    public:
    explicit Node(const DataType& data, Node* next = nullptr)
    : data(data)
    , next(next)
    {
    }
    };

private:
    Node* head;
    Node* tail;
    pos count;

public:
    ListaPosicionadaSimplementeEnlazada()
        :head(nullptr)
        ,tail(nullptr)
    {
        iniciar();
    }
    ~ListaPosicionadaSimplementeEnlazada()
    {
    }
    bool vacia() const;
    void iniciar();
    void destruir();
    void vaciar();
    void insertar(const DataType elem, pos posicion);
    void agregarAlFinal(const DataType elem);
    void borrar(pos posicion);
    const DataType recuperar(pos posicion);
    void modificarElemento(DataType elem, pos posicion);
    void intercambiar(pos pos_2, pos pos_1);
    int numElem()const;
    DataType siguiente(pos posicion);
    DataType anterior(pos posicion);
    std::string imprimir();
};

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::iniciar()
{
    count = 0;
}

template <typename DataType>
bool ListaPosicionadaSimplementeEnlazada<DataType>::vacia()const
{
    return head == nullptr;
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::destruir()
{
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::vaciar()
{
    count = 0;
    head = nullptr;
    tail = nullptr;
}


template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::insertar(const DataType elem, pos posicion = 1)
{
    if (count == 0) {
        head = new Node(elem);                  // Agregamos el elemento como cabeza
        ++count;                                // Aumentamos el contador de elementos
    }
    else
    {
        Node* temporal = this->head;

        for (int i = 1; i < posicion; i++){
            temporal = temporal->next;
        }
        Node* nuevo_elem = new Node(elem, temporal->next);
        temporal->next = nuevo_elem;           // Le asignamos el puntero next hacia el elemento que insertamos al elemento antes del insertado
        ++count;                              // Aumentamos el contador de elementos
    }
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::agregarAlFinal(const DataType elem)
{
    Node *nuevoNodo = new Node(elem);
    ++count;
    if (count != 1){                        // Aumentamos el contador de elementos
        this->tail->next = nuevoNodo;       //El siguiente elemento despues del penultimo es el que estamos agregando
        tail = nuevoNodo;                   //El ultimo nodo pasa a ser el que acabamos de agregar
    }
    else {
        this->tail = nuevoNodo;
        this->head = nuevoNodo;
    }
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::borrar(pos posicion)
{
    if (count >= 2){                  // Si hay mas de un elemento
      Node* temporal = this->head;     // Empezamos por el primer nodo
      if (posicion == 1) {            // Si el que queremos eliminar es el primero
        this->head = temporal->next;    // El inicio de la lista es ahora el segundo elemento
        --count;                      // Restamos uno al contador
      }
      else { //Si no queremos borrar el elemento en la primera posicion
        Node* anterior;
        for (int i = 1; i < posicion; i++){   // Iteramos hasta la posicion dada -1
            temporal = temporal->next;         // Asignamos el temporal como el elemento en la posicion pedida
            anterior = temporal;
        }
        // Aqui cambiamos los punteros para que se "brinquen" el elemento que queremos borrar
        Node* siguiente = temporal->next;      /* Esta asignacion temporal se */
        anterior->next = siguiente;            /* usa para evitar ambiguedad  */
                                              /* en la asignacion de valores */
        --count;                              // Restamos uno al contador
      }
    }
    else if (count == 1){   // Si solo hay un elemento
      this->head = nullptr;  // Vaciaremos la lista
      this->tail = nullptr;
      --count;              // Restamos uno al contador
    }
}
// En las siguientes funciones aplicamos la misma logica
template <typename DataType>
const DataType ListaPosicionadaSimplementeEnlazada<DataType>::recuperar(pos posicion)
{
  if (count >= 2){
    Node* temporal = this->head;
    for (int i = 1; i < posicion; i++){
        temporal = temporal->next;
    }
    return temporal->data;     // Devolvemos los datos que tiene este nodo
  }
  else if (count == 1){
    return (this->head->data);  // Devolvemos los datos del unico nodo, que es el inicial
  }
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::modificarElemento(DataType elem, pos posicion)
{
    if (count >= 2){
      Node* temporal = this->head;
      for (int i = 1; i < posicion; i++){
          temporal = temporal->next;
      }
      temporal->data = elem;   // Modificamos los datos del nodo en la posicion dada
    }
    else if (count == 1){
      this->head->data = elem; // Modificamos los datos del unico nodo, el primero
    }
}

template <typename DataType>
void ListaPosicionadaSimplementeEnlazada<DataType>::intercambiar(pos pos_1, pos pos_2)
{
  if (count == 2){              // Analizamos este caso para ahorrar tiempo en iteraciones
    Node* temporal = this.tail; // Intercambiamos los valores
    this.tail = this.head;      // El ultimo por el primero
    this.head = temporal;       // Y viceversa
  }
  else if (count > 2){
    Node* temp_1 = this.head;
    Node* temp_2 = this.head;
    if (pos_1 != 1){                      // Solo si no nos estan pidiendo la primera posicion
      for (int i = 1; i < pos_1; i++){    // Iteramos hasta la segunda posicion -1
          temp_1 = temp_1.next;           // Asignamos temp_1 al elemento que necesitamos
      }
    }
    if (pos_2 != 1){                      // Solo si no nos estan pidiendo la primera posicion
      for (int i = 1; i < pos_2; i++){    // Iteramos hasta la segunda posicion -1
          temp_2 = temp_2.next;           // Asignamos temp_2 al elemento que necesitamos
      }
    }
    Node* temp = temp_1;                // Hacemos el cambio
    temp_1 = temp_2;                    // El primero por el segundo
    temp_2 = temp;                      // El segundo por el primero
    temp_1.next = temp_2.next;          // Y cambiamos los punteros
    temp_2.next = temp.next;
  }
}

template <typename DataType>
int ListaPosicionadaSimplementeEnlazada<DataType>::numElem()const
{
    return count; // Devuelve el contador de elementos que lleva la lista
}

template <typename DataType>
std::string ListaPosicionadaSimplementeEnlazada<DataType>::imprimir()
{
  Node* actual(0);
  actual = this->head;
  std::string resultado;
  resultado += "[";
    for (int i = 0; i < count; count++){
      DataType datos = actual->data;
      resultado += datos;
      resultado += ", ";
    }
  resultado += "]";
  return resultado;
}

template <typename DataType>
DataType ListaPosicionadaSimplementeEnlazada<DataType>::anterior(pos posicion){
    if (count >= 2){
      Node* anterior = this->head;
      for (int i = 1; i < posicion; i++){
          anterior = anterior->next;
      }
      return anterior->data;   // Modificamos los datos del nodo en la posicion dada
    }
    else {   return -1;   }
}

template <typename DataType>
DataType ListaPosicionadaSimplementeEnlazada<DataType>::siguiente(pos posicion){
    if (count >= 2 && posicion < count){
      Node* siguiente = this->head;
      for (int i = 1; i <= posicion; i++){
          siguiente = siguiente->next;
      }
      return siguiente->data;   // Modificamos los datos del nodo en la posicion dada
    }
    else {   return -1;   }
}

}

//#endif // LISTAPosicionadaSimplementeENLAZADA
