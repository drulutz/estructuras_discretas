#include "ListaPosDobEn.h"
#include "ListaPosSimpEn.h"
#include<iostream>

using namespace tarea1;

int main() {
    ListaPosicionadaSimplementeEnlazada<int> lista;
    lista.iniciar();
    lista.insertar(5);
    std::cout << lista.anterior(0);
    std::cout << lista.imprimir();
}
