#ifndef LISTAINDEXADAARRAY
#define LISTAINDEXADAARRAY

#endif // LISTAINDEXADAARRAY

#ifndef LISTAINDEXADAARRAY_H
#define LISTAINDEXADAAAARRAY_H


#include <iostream>

namespace tarea1
{
template <typename DataType> class ListaIndexadaArray
{

private:
    size_t capacity;
    DataType* data;
    size_t count;
public:
    ListaIndexadaArray()
        :capacity(50)
        , data(new DataType[capacity])
    {
    }

    ~ListaIndexadaArray()
    {
        delete[] data;
        data = 0;
    }

    void iniciar();
    void destruir();
    void vaciar();
    bool vacia();
    void insertar(const DataType elem, size_t ind);
    void agregarAlFinal(DataType elem);
    void borrar(size_t ind);
    const DataType recuperar(size_t ind);
    void modificarElemento(DataType elem, size_t ind);
    void intercambiar(size_t ind1, size_t ind2);
    int numElem() const;
    std::string() imprimir();

};

template <typename DataType>
void ListaIndexadaArray<DataType>::iniciar()
{
    count = 0;
}

template <typename DataType>
void ListaIndexadaArray<DataType>::destruir()
{
}

template <typename DataType>
void ListaIndexadaArray<DataType>::vaciar()
{
    count = 0;
}

template <typename DataType>
bool ListaIndexadaArray<DataType>::vacia()
{
    return (count > 0) ? false : true;
}

template <typename DataType>
void ListaIndexadaArray<DataType>::insertar(const DataType elem, size_t ind)
{
    if (ind != count)
    {
    for(int i = count; i >= ind; --i) //corre todos los elementos que se encuentran despues del ind
        data[i] = data[i - 1];
    data[ind - 1] = elem; //copia el elemento en la posicion pedida, es ind - 1 porque el array inicia en 0.
    ++count;
    }
    else
        agregarAlFinal(elem);
}

template <typename DataType>
void ListaIndexadaArray<DataType>::agregarAlFinal(DataType elem)
{
    data[count] = elem;
    ++count;
}

template <typename DataType>
void ListaIndexadaArray<DataType>::borrar(size_t ind)
{
    for(int i = ind - 1; i < count; ++i) //corre todos los elementos que se encuentran despues del ind a la izquierda
        data[i] = data[i + 1];
    --count;
}

template <typename DataType>
const DataType ListaIndexadaArray<DataType>::recuperar(size_t ind)
{
    return data[ind - 1];
}

template <typename DataType>
void ListaIndexadaArray<DataType>::modificarElemento(DataType elem, size_t ind)
{
    data[ind - 1] = elem;
}

template <typename DataType>
void ListaIndexadaArray<DataType>::intercambiar(size_t ind1, size_t ind2)
{
    DataType temp = data[ind1];
    data[ind1] = data[ind2];
    data[ind2] = temp;
}

template <typename DataType>
int ListaIndexadaArray<DataType>::numElem() const
{
    return count;
}

template <typename DataType>
string ListaIndexadaArray<DataType>:: imprimir(){
    return "\n";
}

}

#endif // LISTAINDEZADAARRAY_H
