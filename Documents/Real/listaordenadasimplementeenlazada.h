#ifndef LISTAORDENADASIMPLEMENTEENLAZADA
#define LISTAORDENADASIMPLEMENTEENLAZADA

namespace tarea1{

template <typename DataType> class ListaOrdenadaSimplementeEnlazada
{

private:
    struct Node
    {
    DataType data;
    Node* next;

    public:
    explicit Node(const DataType& data, Node* previous = nullptr, Node* next = nullptr)
    : data(data)
    , previous(previous)
    , ne(next)
    {
    }
    };

private:
    Node* head;
    Node* tail;
    size_t count;

public:
    ListaOrdenadaSimplementeEnlazada()
        :head(nullptr)
        ,tail(nullptr)
    {
        iniciar();
    }
    ~ListaOrdenadaSimplementeEnlazada()
    {
    }
    bool vacia() const;
    void iniciar();
    void destruir();
    void vaciar();
    void insertar(const DataType elem);
    void agregarAlFinal(DataType elem);
    void borrar(size_t ind);
    const DataType recuperar(size_t ind);
    void modificarElemento(DataType elem, size_t ind);
    void intercambiar(size_t ind1, size_t ind2);
    const int numElem();
    std::string imprimir();
};

template <typename DataType>
void ListaOrdenadaSimplementeEnlazada<DataType>::iniciar()
{
    count = 0;
}

template <typename DataType>
bool ListaOrdenadaSimplementeEnlazada<DataType>::vacia()
{
    return head == nullptr;
}

template <typename DataType>
void ListaOrdenadaSimplementeEnlazada<DataType>::destruir()
{
}

template <typename DataType>
void ListaOrdenadaSimplementeEnlazada<DataType>::vaciar()
{
    count = 0;
    head = nullptr;
    tail = nullptr;
}

template <typename DataType>
void ListaOrdenadaSimplementeEnlazada<DataType>::insertar(const DataType elem)
{
    if (count = 0)
        head = Node*(elem);
    else
    {
        bool repetido;
        Node* pivote(elem);
        while (repetido != true)
        {

        }
    }
}

template <typename DataType>
string ListaOrdenadaSimplementeEnlazada<DataType>:: imprimir(){
    return "\n";
}

}

#endif // LISTAORDENADASIMPLEMENTEENLAZADA
