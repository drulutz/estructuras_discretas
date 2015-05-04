#ifndef LISTAPOSICIONADAARREGLO_H
#define LISTAPOSICIONADAARREGLO_H

#include <iostream>
#include <memory>

template <typename DataType>
class ListaPosicionadaArray{

private:
    int size;
	DataType* data;
	int contador;

public:

	ListaPosicionadaArray()
        :size(199)
        ,data(new DataType[size])
	{
	}

	~ListaPosicionadaArray()
	{
		delete[] data;
		data = 0;
	}

	void iniciar();
    //Efe: Crea una lista posicionada vacia.
	//Req:
	//Mod: La posicion inicial, que se inicializa en cero.

	void destruir();
	//Efe: Destruye el objeto lista posicionada.
	//Req: Una lista posicionada creada.
	//Mod:

	void vaciar();
	//Efe: Borra los elementos de la lista posicionada.
    //Req: Una lista posicionada no vacia.
	//Mod: El valor de posición final que vuelve a quedar en cero.

    bool vacia();
    //Efe: Devuelve verdad si la lista está vacia o falso si la lista tiene elementos.
	//Req: Una lista posicionada creada.
	//Mod:

	void insertar(const DataType elem, int pos);
	//Efe: Agrega el elemento elem en la posición pos.
	//Req: La lista inicializada y pos válida en la lista.
	//Mod: Abre campo en la lista para insertar el nuevo elemento, moviendo a todos los que estén después de este una posición adelante.

	void agregarAlFinal(DataType elem);
    //Efe: Agrega el elemento elem en la ultima posición no ocupada de la lista.
	//Req: La lista inicializada.
    //Mod: Aumenta en uno el size de la lista, sin modificar la posición de ningún otro elemento.

	void borrar(int pos);
	//Efe: Quita al elemento ubicado en la posición pos de la lista.
	//Req: La lista inicializada y pos valida en la lista.
    //Mod: Disminuye en uno el size de la lista, moviendo todos los elementos que estaban después del eliminado una posición atrás.

    DataType recuperar(int pos)const;
	//Efe: Devuelve el valor del elemento en la posición p de la lista.
	//Req: Una lista posicionada con al menos p - 1 elementos.
	//Mod:

	void modificarElemento(DataType elem, int pos);
	//Efe: Cambia el valor del elemento en la posición pos de la lista.
	//Req: Una lista posicionada con al menos pos - 1 elementos.
	//Mod: El valor del elemento en la posición pos de la lista.

	void intercambiar(int pos1, int pos2);
	//Efe: Mueve el elemento de la posición pos1, a la posición pos2 y el elemento de la posición p2 a la posición p1.
	//Req: Una lista posicionada con ambas posiciones con un número de elementos menor que los valores de p1 y p2.
	//Mod: La posición de los elementos en pos1 y pos2.

    DataType primera()const ;
	//Efe: Devuelve el elemento en la primera posición de la lista.
	//Req: Una lista con al menos un elemento.
	//Mod:

    DataType ultima()const ;
    //Efe: Devuelve el elemento en la ultima posición de la lista.
	//Req: Una lista con al menos un elemento.
	//Mod:


    DataType siguiente(int pos)const;
	//Efe: Devuelve el elemento que se encuentra en la posición siguiente de pos.
	//Req: Una lista con al menos dos elementos.
	//Mod:

    DataType anterior(int pos)const;
	//Efe: Devuelve el elemento anterior al que se encuentra en la posición pos.
	//Req: Una lista con al menos dos elementos.
	//Mod:

    int numElem()const;
	//Efe: Devuelve el número de elementos en la lista posicionada.
	//Req: Una lista.
	//Mod:
	std::string imprimir();

};


template <typename DataType>
void ListaPosicionadaArray<DataType>::iniciar(){
	contador = 0;
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::destruir(){

}

template <typename DataType>
void ListaPosicionadaArray<DataType>::vaciar(){
	contador = 0;
}

template <typename DataType>
bool ListaPosicionadaArray<DataType>::vacia(){
	return contador == 0;
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::insertar(const DataType elem, int pos){
	if(pos != contador)
	{
		for(int i = contador; i >= pos; --i)
		{
			data[i] = data[i-1];
		}
	data[pos-1] = elem;
	++contador;
	}else{
		agregarAlFinal(elem);
	}
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::agregarAlFinal(DataType elem){
	data[contador] = elem;
	++contador;
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::borrar(int pos){
	for(int i = pos-1; i< contador; ++i)
	{
		data[i] = data[i+1];
	}
	--contador;
}

template <typename DataType>
DataType ListaPosicionadaArray<DataType>::recuperar(int pos) const{
	return  data[pos-1];
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::modificarElemento(DataType elem, int pos){
	data[pos - 1] = elem;
}

template <typename DataType>
void ListaPosicionadaArray<DataType>::intercambiar(int pos1, int pos2){
    DataType temp = data[pos1];
    data[pos1] = data[pos2];
    data[pos2] = temp;
}

template <typename DataType>
DataType ListaPosicionadaArray<DataType>::primera() const{
	return data[0];
}

template <typename DataType>
DataType ListaPosicionadaArray<DataType>::ultima() const{
	return data[contador - 1];
}

template <typename DataType>
DataType ListaPosicionadaArray<DataType>::siguiente(int pos) const{
	return data[pos];
}

template <typename DataType>
DataType ListaPosicionadaArray<DataType>::anterior(int pos) const{
    return data[pos - 2];
}

template <typename DataType>
int ListaPosicionadaArray<DataType>::numElem()const{
	return contador;
}

template <typename DataType>
std::string ListaPosicionadaArray<DataType>:: imprimir(){
    return "\n";
}

#endif // LISDataTypeAPOSICIONADAARREGLO_H
