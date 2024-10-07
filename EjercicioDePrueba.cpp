#include <iostream>
#include "Arbol/ArbolBinario.h"
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

int main() {

    cout << "Ejercicio de Prueba" << endl;


    ArbolBinarioAVL<int> prueba;
    //cargar los datos:
    prueba.put(101);
    prueba.print();
    cout<<prueba.getBalance()<<endl;
    prueba.put(20);
    prueba.print();
    cout<<prueba.getBalance()<<endl;
    prueba.put(07);
    prueba.print();
    cout<<prueba.getBalance()<<endl;
    prueba.put(2004);
    prueba.print();
    cout<<prueba.getBalance()<<endl;

    //mostrar el arbol:
    prueba.print();

    //cargarle datos nuevos:
    prueba.put(3);
    prueba.print();
    cout<<prueba.getBalance()<<endl;
    prueba.put(400);
    prueba.print();
    cout<<prueba.getBalance()<<endl;
    prueba.put(20);
    prueba.print();
    cout<<prueba.getBalance()<<endl;



    return 0;
}
