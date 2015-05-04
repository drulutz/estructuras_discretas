#ifndef LISTAINDEZADAARREGLO_H
#define LISTAINDEZADAARREGLO_H


#include <iostream>

template <typename DataType> class ListaIndezadaArray
{

private:
	size_t capacity;
	DataType* data;
	size_t count;
public:
	ListaIndezadaArray()
		:capacity(50)
		, data(new DataType[capacity])
	{
	}

	~ListaIndezadaArray()
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
    DataType recuperar(size_t ind)const;
	void modificarElemento(DataType elem, size_t ind);
	void intercambiar(size_t ind1, size_t ind2);
    int numElem()const;
    std::string imprimir();

};

template <typename DataType>
void ListaIndezadaArray<DataType>::iniciar()
{
	count = 0;
}

template <typename DataType>
void ListaIndezadaArray<DataType>::destruir()
{
}

template <typename DataType>
void ListaIndezadaArray<DataType>::vaciar()
{
	count = 0;
}

template <typename DataType>
bool ListaIndezadaArray<DataType>::vacia()
{
	return (count > 0) ? false : true;
}

template <typename DataType>
void ListaIndezadaArray<DataType>::insertar(const DataType elem, size_t ind)
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
void ListaIndezadaArray<DataType>::agregarAlFinal(DataType elem)
{
	data[count] = elem;
	++count;
}

template <typename DataType>
void ListaIndezadaArray<DataType>::borrar(size_t ind)
{
	for(int i = ind - 1; i < count; ++i) //corre todos los elementos que se encuentran despues del ind a la izquierda
		data[i] = data[i + 1];
	--count;
}

template <typename DataType>
DataType ListaIndezadaArray<DataType>::recuperar(size_t ind) const
{
	return data[ind - 1];
}

template <typename DataType>
void ListaIndezadaArray<DataType>::modificarElemento(DataType elem, size_t ind)
{
	data[ind - 1] = elem;
}

template <typename DataType>
void ListaIndezadaArray<DataType>::intercambiar(size_t ind1, size_t ind2)
{
	DataType temp = data[ind1];
	data[ind1] = data[ind2];
	data[ind2] = temp;
}

template <typename DataType>
int ListaIndezadaArray<DataType>::numElem() const
{
	return count;
}

template <typename DataType>
string ListaIndezadaArray<DataType>:: imprimir(){
    return "\n";
}


#endif // LISDataDataDataTypeypeypeAINDEZADAARREGLO_H
