/* Programa que muestra los resultados de las listas */
#include <iostream>
#include <string>
#include <sstream>
#include "ListaPosDobEn.h"
#include "ListaPosSimpEn.h"
#include "listaposicionadaarreglo.h"
#include "listaordenadaarray.h"
#include "listaordenadasimplementeenlazada.h"
#include "listaindezadasimplementeenlazada.h"
#include "listaindezadaarreglo.h"
#include "listaposicionadaposicionatrasada.h"



using namespace tarea1;

using namespace std;

void lista_ind_si()
{
  bool salir = false;
  ListaIndezadaSimplementeEnlazada<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Indexada Simplemente Enlazada ---------------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista indexada simplemente enlazada vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
            break;
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_ind_arreglo()
{
  bool salir = false;
  ListaIndexadaArray<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Indexada con Arreglo----------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista indexada con arreglo vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
            break;
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_index(){
    cout << "Usted eligio Lista Indexada \n";
    cout << "Ingrese el numero de implementacion que desea probar o cualquier otro caracter para volver:\n";
    cout << " 1) Arreglo\n";
    cout << " 2) Lista Simplemente Enlazada\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            lista_ind_arreglo();
            break;
        case 2:
            lista_ind_si();
            break;
    }
}

void lista_ord_si()
{
  bool salir = false;
  ListaOrdenadaSimplementeEnlazada<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Ordenada Simplemente Enlazada ---------------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista ordenada simplemente enlazada vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
            break;
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_ord_arreglo()
{
  bool salir = false;
  ListaOrdenadaArray<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Ordenada con Arreglo----------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista ordenada con arreglo vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
            break;
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_ordenada(){
    cout << "Usted eligio Lista Ordenada \n";
    cout << "Ingrese el numero de implementacion que desea probar o cualquier otro caracter para volver:\n";
    cout << " 1) Arreglo\n";
    cout << " 2) Lista Simplemente Enlazada\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            lista_ord_arreglo();
            break;
        case 2:
            lista_iord_si();
            break;
    }
}

void lista_pos_arreglo(){
  bool salir = false;
  ListaPosicionadaArray<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Posicionada con Arreglo ----------------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista posicionada con arreglo vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_pos_de(){
  bool salir = false;
  ListaPosicionadaSimplementeEnlazada<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Posicionada Doblemente Enlazada -------------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista posicionada simplemente enlazada vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_pos_se(){
  bool salir = false;
  ListaPosicionadaSimplementeEnlazada<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Posicionada Simplemente Enlazada ----------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista posicionada simplemente enlazada vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_pos_cab(){
  bool salir = false;
  ListaPosicionadaPosicionAtrasada<int> lista;
  lista.iniciar();
  while (salir == false){
    cout << "---------- Lista Posicionada Posicion Atrasada ----------\n";
    cout << lista.imprimir();
    cout << "\n------------------------------------------------------------\n";
    cout << "Se ha creado una lista posicionada posicion atrasada vacia de datos int.\n";
    cout << "Elija el numero de funcion que desea probar en ella o q para salir:\n";
    cout << "(Los parametros se solicitaran despues)\n";
    cout << "1) Destruir (Esto hara que el programa termine)\n";
    cout << "2) Vaciar\n";
    cout << "3) Insertar(elemento, posicion)\n";
    cout << "4) AgregarAlFinal(elemento)\n";
    cout << "5) Borrar(posicion) \n";
    cout << "6) Recuperar(posicion)\n";
    cout << "7) Modificar(valor, posicion)\n";
    cout << "8) Intercambiar(posicion1, posicion2)\n";
    cout << "9) NumElem()\n";
    cout << "-----------------------------------\n";
    int opcion = 0;
    cin >> opcion;
    switch (opcion) {
        case 1:
            salir = true;
        case 2:
            lista.vaciar();
            cout << lista.imprimir();
            break;
        case 3:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem;
            cin >> elem;
            cout << "\nIngrese la posicion que en la que desea insertarlo: ";
            int pos;
            cin >> pos;
            lista.insertar(elem, pos);
            cout << elem + " insertado con exito";
            cout << lista.imprimir();
            break;
        case 4:
            cout << "Ingrese el valor del elemento que desea insertar: ";
            int elem2;
            cin >> elem2;
            try {   lista.agregarAlFinal(elem2);    }
            catch (const std::bad_alloc&){ cout << "Error de memoria";  }
            cout << lista.imprimir();
        case 5:
            cout << "\nIngrese la posicion que desea borrar: ";
            int pos2;
            cin >> pos2;
            lista.borrar(pos2);
            cout << "Elemento en borrado con exito \n";
            cout << lista.imprimir();
            break;
        case 6:
            cout << "\nIngrese la posicion que recuperar: ";
            int pos6;
            cin >> pos6;
            lista.borrar(pos6);
            cout << lista.recuperar(pos6);
            cout << " es el elemento recuperado \n";
            cout << lista.imprimir();
        case 7:
            cout << "\nIngrese la posicion que desea modificar: ";
            int pos3;
            cin >> pos3;
            cout << "\nIngrese el elemento por el que lo desea modificar: ";
            int elem3;
            cin >> elem3;
            lista.modificarElemento(elem3, pos3);
            cout << "Modificacion exitosa!\n";
            cout << lista.imprimir();
            break;
        case 8:
            cout << "\nIngrese la primera posicion: ";
            int pos_1;
            cin >> pos_1;
            cout << "\nIngrese la segunda posicion: ";
            int pos_2;
            cin >> pos_2;
            lista.modificarElemento(pos_1, pos_2);
            cout << "Intercambio exitoso";
            cout << lista.imprimir();
            break;
        case 9:
            cout << lista.numElem();
    }
  }
}

void lista_pos(){
  cout << "Usted eligio Lista Posicionada \n";
  cout << "Ingrese el numero de implementacion que desea probar o cualquier otro caracter para volver:\n";
  cout << " 1) Arreglo\n";
  cout << " 2) Lista Simplemente Enlazada\n";
  cout << " 3) Lista Doblemente Enlazada\n";
  cout << " 4) Lista con Cabeza y Posicion Atrasada\n";
  int opcion = 0;
  cin >> opcion;
  switch (opcion)
  {
      case 1:
        lista_pos_arreglo();
        break;
      case 2:
        lista_pos_se();
        break;
      case 3:
        lista_pos_de();
        break;
      case 4:
        lista_pos_cab();
        break;
  }
}

int main()
{
        cout << "----------------------------------------\n";
        cout << "          Tarea Programada 1            \n";
        cout << "               Etapa 2                  \n";
        cout << "                Por:                    \n";
        cout << "        Luis Jose Lopez Miranda         \n";
        cout << "        Josue Rojas                     \n";
        cout << "        Jose Miguel Mesen               \n";
        cout << "----------------------------------------\n";
        cout << "----------------------------------------\n";

        bool salir = false;
        int opcion = 0;
        while (salir == false) {
          cout << "Ingrese el numero de opcion que desea probar o \"q\" para salir: \n";
          cout << " 1) Lista Posicionada\n";
          cout << " 2) Lista Indexada\n";
          cout << " 3) Lista Ordenada\n";
          cin >> opcion;
          switch (opcion)
          {
              case 1:
                lista_pos();
                break;
              case 2:
                lista_index();
                break;
              case 3:
                lista_ordenada();
                break;
          }
        }
        return 0;
}
