#ifndef LISTAORDENADAARRAY
#define LISTAORDENADAARRAY

namespace tare1
{

template <typename DataType>
class ListaOrdenadaArray{

private:

    int tamano;
    DataType* data;
    int contador;

public:

    ListaOrdenadaArray()
        :tamano(199)
        ,data(new DataType[tamano])
    {
    }

    ~ListaOrdenadaArray()
    {
        delete[] data;
        data = 0;
    }

    void iniciar();
    //Efe: Se inicializa una lista ordenada.
    //Req:
    //Mod: Cambia el tamano lógico a 0.

    void destruir();
    //Efe: Destruye la lista ordenada.
    //Req: Una lista ordenada inicializada.
    //Mod:

    void vaciar();
    //Efe: Quita todos los elementos de la lista L.
    //Req: Una lista ordenada inicializada.
    //Mod: Cambia el tamano lógico de la lista a 0.

    bool vacia();
    //Efe: Devuelve verdadero si la lista esta vacia, o falso si esta tiene elementos.
    //Req: Una lista ordenada inicializada.
    //Mod:

    void agregar(const DataType elem);
    //Efe: Agrega el elemento elem de manera ordenada en la lista. Si el elemento ya estaba entonces no se hace ninguna modificación.
    //Req: Una lista ordenada inicializada.
    //Mod: Aumenta el tamano lógico de la lista y además puede que inserte un elemento en medio de otros dos elementos, manteniendo la relación de orden entre el nuevo elemento y sus vecinos.

    void borrar(DataType elem);
    //Efe: Elimina al elemento elem de la lista L. Si el elemento no se encuentra no hace nada.
    //Req: una lista ordenada inicializada, y de un elemento e presente en ella.
    //Mod: Disminuye el tamano lógico de la lista, cambiando el orden.

    const DataType primero();
    //Efe: Devuelve el primer elemento guardado en la lista.
    //Req: Una lista ordenada inicializada, con al menos un elemento.
    //Mod:

    const DataType ultimo();
    //Efe: Devuelve el ultimo elemento ubicado en la lista.
    //Req: Una lista ordenada inicializada con al menos un elemento.
    //Mod:

    const DataType siguiente(const DataType elem);
    //Efe: Devuelve el elemento ubicado despues de elem.
    //Req: una lista ordenada inicializada, con el elemento e incluido.
    //Mod:

    const DataType anterior(const DataType elem);
    //Efe: Devuelve el elemento ubicado antes de elem.
    //Req: una lista ordenada inicializada, con el elemento e incluido.
    //Mod:

    const int numElem();
    //Efe: Devuelve el numero de elementos en la lista ordenada.
    //Req: una lista ordenada inicializada.
    //Mod:

    string imprimir();

};


template <typename DataType>
void ListaOrdenadaArray<DataType>::iniciar(){
    contador = 0;
}

template <typename DataType>
void ListaOrdenadaArray<DataType>::destruir(){

}

template <typename DataType>
void ListaOrdenadaArray<DataType>::vaciar(){
    contador = 0;
}

template <typename DataType>
bool ListaOrdenadaArray<DataType>::vacia(){
    return contador == 0;
}

template <typename DataType>
void ListaOrdenadaArray<DataType>::agregar(const DataType elem){

}

template <typename DataType>
void ListaOrdenadaArray<DataType>::borrar(const DataType elem){
	bool encontrado = false;
	while(encontrado == false)
	{
		if(data[iterador] == elem)
		{
		encontrado = true;
		indborrar = iterador;
		}
		++iterador;
	}
	for(int i = indborrar; i < contador; ++i)
 	{
        DataType temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
        }
        --contador;
}

template <typename DataType>
const DataType ListaOrdenadaArray<DataType>::primero(){
	return data[0];
}

template <typename DataType>
const DataType ListaOrdenadaArray<DataType>::ultimo(){
	return data[contador - 1];
}

template <typename DataType>
const DataType ListaOrdenadaArray<DataType>::siguiente(const DataType elem){

	bool encontrado = false;
	int iterador = 0;
	while(encontrado == false)
	{
		if(data[iterador] == elem)
		{
		encontrado = true;
		return data[iterador + 1];
		}
	++iterador;
	}
}

template <typename DataType>
const DataType ListaOrdenadaArray<DataType>::anterior(const DataType elem){

	bool encontrado = false;
	int iterador = 0;
	while(encontrado == false)
	{
		if(data[iterador] == elem)
		{
		encontrado = true;
		return data[iterador - 1];
		}
	++iterador;
	}
}

template <typename DataType>
const int ListaOrdenadaArray<DataType>::numElem(){
	return contador;
}

template <typename DataType>
string ListaOrdenadaArray<DataType>::imprimir(){
	return " ";
}

}
#endif // LISTAORDENADAARRAY
