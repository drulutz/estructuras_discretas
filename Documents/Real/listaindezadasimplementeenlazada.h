#ifndef LISTAINDEZADASIMPLEMENTEENLAZADA
#define LISTAINDEZADASIMPLEMENTEENLAZADA

#include <iostream>

template <typename DataType> class ListaIndezadaSimplementeEnlazada
{

private:
    struct Node
    {
    DataType data;
    Node* next;

    public:
    explicit Node(const DataType& data, Node* next = nullptr)
    : data(data)
    {
    }
    };

private:
    Node* head;
    Node* tail;
    int count;

public:
    ListaIndezadaSimplementeEnlazada()
        :head(nullptr)
        ,tail(nullptr)
    {
        iniciar();
    }
    ~ListaIndezadaSimplementeEnlazada()
    {
    }
    bool vacia() const;
    void iniciar();
    void destruir();
    void vaciar();
    void insertar(const DataType elem, int ind);
    void borrar(int ind);
    void agregarAlFinal(DataType elem);
    DataType recuperar(int ind)const;
    void modificarElemento(DataType elem, int ind);
    void intercambiar(int ind1, int ind2);
    int numElem()const;
    void imprimir();
};

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::iniciar()
{
    count = 0;
}

template <typename DataType>
bool ListaIndezadaSimplementeEnlazada<DataType>::vacia()const
{
    return head == nullptr;
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::destruir()
{
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::vaciar()
{
    count = 0;
    head = nullptr;
    tail = nullptr;
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::insertar(const DataType elem, int ind)
{
    if (count == 0)
    {
        head = Node(elem);
        tail = head;
        ++count;
    }
    else
    {
        if(ind == 1)
        {
            Node* temp = Node(elem);
            temp->next = head;
            head = temp;

        }
        else
        {
        Node* pivote = head;
        int contadorIndices = 1;
        while(contadorIndices < ind - 1)
        {
            pivote = pivote->next;
            ++contadorIndices;
        }
        Node* temp = Node(elem);
        temp->next = pivote->next;
        pivote->next = temp;
        }
        ++count;
    }
}


template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::agregarAlFinal(DataType elem)
{
    tail->next = new Node(elem);
    tail = tail->next;
    ++count;
    if(count == 1)
        head = tail;
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::borrar(int ind)
{
    if(ind == 1)
    {
        head = head->next;
        --count;
    }
    else
    {
        int contadorIndices = 1;
        bool borrado = false;
        Node* pivote = head;
        while (borrado == false && pivote->next != nullptr)
        {
            if(contadorIndices == ind-1)
            {
                Node* temp = pivote->next->next;
                pivote->next = temp;
                --count;
                borrado = true;
            }
            pivote = pivote->next;
            ++contadorIndices;
        }
    }
}

template <typename DataType>
DataType ListaIndezadaSimplementeEnlazada<DataType>::recuperar(int ind) const
{
    if(ind == 1)
    {
        return head->data;
    }
    else
    {
        int contadorIndices = 1;
        Node* pivote = head;
        while (pivote->next != nullptr)
        {
            if(contadorIndices == ind-1)
            {
                return pivote->next->data;
            }
            pivote = pivote->next;
            ++contadorIndices;
        }
    }
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::modificarElemento(DataType elem, int ind)
{
    if(ind == 1)
    {
        head->data = elem;
    }
    else
    {
        int contadorIndices = 1;
        bool modificado = false;
        Node* pivote = head;
        while (modificado == false && pivote->next != nullptr)
        {
            if(contadorIndices == ind-1)
            {
                pivote->next->data = elem;
                modificado = true;
            }
            pivote = pivote->next;
            ++contadorIndices;
        }
    }
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::intercambiar(int ind1, int ind2)
{
    Node* elem1 = nullptr;
    Node* elem2 = nullptr;
    int contadorIndices = 1;
    bool encontrados = false;
    Node* pivote = head;
    while (encontrados == false && pivote != nullptr)
    {
        if(contadorIndices == ind1 || contadorIndices == ind2)
        {
            if(elem1 == nullptr)
                elem1 = pivote;
            else
            {
                elem2 = pivote;
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
int ListaIndezadaSimplementeEnlazada<DataType>::numElem() const
{
    return count;
}

template <typename DataType>
void ListaIndezadaSimplementeEnlazada<DataType>::imprimir()
{
    Node* pivote = head;
    for (int i = 1; i <= count; ++i)
    {
        std::cout << pivote->data << " " ;
        pivote = pivote->next;
    }
    std::cout << std::endl ;
}
#endif // LISTAINDEZADASIMPLEMENTEENLAZADA

