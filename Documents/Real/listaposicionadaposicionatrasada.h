#ifndef LISTAPOSICIONADAPOSICIONATRASADA
#define LISTAPOSICIONADAPOSICIONATRASADA

  template <typename DataType> class ListaPosicionadaPosicionAtrasada {

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
    ListaPosicionadaPosicionAtrasada()
        :head(nullptr)
        ,tail(nullptr)
    {
        iniciar();
    }
    ~ListaPosicionadaPosicionAtrasada()
    {
    }
    void iniciar();
    void destruir();
    void vaciar();
    bool vacia();
    void insertar(const DataType elem, pos posicion);
    void agregarAlFinal(DataType elem);
    void borrar(pos posicion);
    DataType recuperar(pos posicion)const;
    void modificarElemento(DataType elem, pos posicion);
    void intercambiar(pos pos1, pos pos2);
    DataType primera()const ;
    DataType ultima()const ;
    DataType siguiente(pos posicion)const;
    DataType anterior(pos posicion)const;
    int numElem()const;
};

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::iniciar()
{
    count = 0;
    head = new Node();
}

template <typename DataType>
bool ListaPosicionadaPosicionAtrasada<DataType>::vacia()
{
    return head->next == nullptr;
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::destruir()
{
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::vaciar()
{
    count = 0;
    head->next = nullptr;
    tail = nullptr;
}


template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::insertar(const DataType elem, pos posicion)
{
    if (count == 0)
    {
        head->next = Node(elem);
        tail = head->next;
        ++count;
    }
    else
    {
        Node* temporal = head;

        for (int i = 1; i < posicion; i++){
            temporal = temporal.next;
        }
        Node* nuevo = new Node(elem);
        nuevo->next = temporal->next;
        temporal->next = nuevo;           // Le asignamos el puntero next hacia el elemento que insertamos al elemento antes del insertado
        ++count;
        if(tail->next != nullptr)
            tail = tail->next;
    }
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::agregarAlFinal(const DataType elem)
{
    Node* nuevo = Node(elem);
    tail->next = nuevo;
    tail = tail->next;
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::borrar(pos posicion)
{
    Node* iterador = head;
    for (int i = 1; i < posicion; ++i){
        iterador = iterador.next;
    }
    Node* temp = iterador->next->next;
    iterador->next = temp;
    --count;
    if(temp == nullptr)
        tail = iterador;
}

template <typename DataType>
DataType ListaPosicionadaPosicionAtrasada<DataType>::recuperar(pos posicion)const
{
    Node* iterador = head;
    for (int i = 1; i < posicion; ++i){
        iterador = iterador.next;
    }
    return iterador->next;
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::modificarElemento(DataType elem, pos posicion)
{
    Node* iterador = Node(elem);
    for (int i = 1; i < posicion; ++i){
        iterador = iterador.next;
    }
    iterador->next->data = elem;
}

template <typename DataType>
void ListaPosicionadaPosicionAtrasada<DataType>::intercambiar(pos pos1, pos pos2)
{
    Node* elem1 = nullptr;
    Node* elem2 = nullptr;
    int contadorIndices = 1;
    bool encontrados = false;
    Node* pivote = head;
    while (encontrados == false && pivote->next != nullptr)
    {
        if(contadorIndices == pos1 || contadorIndices == pos2)
        {
            if(elem1 == nullptr)
                elem1 = pivote->next;
            else
            {
                elem2 = pivote->next;
                encontrados = true;
            }
        }
        pivote = pivote->next;
        ++contadorIndices;
    }
    DataType temp = elem1->data;
    elem1->data = elem2->data;
    elem2->data = temp;
}

template <typename DataType>
DataType ListaPosicionadaPosicionAtrasada<DataType>::primera() const
{
    return head->next->data;
}

template <typename DataType>
DataType ListaPosicionadaPosicionAtrasada<DataType>::ultima() const
{
    return tail->data;
}

template <typename DataType>
DataType ListaPosicionadaPosicionAtrasada<DataType>::siguiente(pos posicion) const
{
    Node* iterador = head;
    for (int i = 1; i < posicion; ++i){
        iterador = iterador.next;
    }
    return iterador->next->next->data;
}

template <typename DataType>
DataType ListaPosicionadaPosicionAtrasada<DataType>::anterior(pos posicion) const
{
    Node* iterador = head;
    for (int i = 1; i < posicion; ++i){
        iterador = iterador.next;
    }
    return iterador->data;
}

template <typename DataType>
int ListaPosicionadaPosicionAtrasada<DataType>::numElem()const
{
    return count;
}

template <typename DataType>
string ListaPosicionadaPosicionAtrasada<DataType>:: imprimir(){
    return "\n";
}

#endif // LISTAPOSICIONADAPOSICIONATRASADA

