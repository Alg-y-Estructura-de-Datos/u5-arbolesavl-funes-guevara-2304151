/*Ejercicio N°1
Un almacén necesita gestionar su inventario de productos. Cada producto tiene un número único de identificación (ID),
y el sistema debe mantener el
inventario organizado para realizar búsquedas rápidas de productos y permitir actualizaciones del stock.
Utilizar un árbol AVL para almacenar los IDs de los productos. El árbol debe mantenerse balanceado para garantizar búsquedas rápidas.
Crear un sistema con un menú que permita gestionar las siguientes opciones:
1.	Insertar un código de producto.
2.	Eliminar un código de producto.
3.	Buscar un producto por código.
4.	Imprimir el árbol (mostrando su estructura balanceada).
5.	Salir del programa.*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

int main(){
    int op, cod;
    ArbolBinarioAVL<int> inventario;

    do {
        cout << "Ingrese segun la accion que desea realizar:\n";
        cout << " 1 - Insertar un codigo de producto\n";
        cout << " 2 - Eliminar un codigo de producto\n";
        cout << " 3 - Buscar un producto por codigo\n";
        cout << " 4 - Mostrar inventario\n";
        cout << " 5 - Salir del programa\n";
        cin >> op;
        switch (op) {
            case 1:
                int m;
                cout << "Ingrese el codigo del producto que desea ingresar: "<<endl;
                cin >> m;
                inventario.put(m);
                inventario.getBalance();
                break;
            case 2:
                int z;
                cout << "Ingrese el codigo del producto que desea eliminar: "<<endl;
                cin >> z;
                inventario.remove(z);
                inventario.getBalance();
                break;
            case 3:
                int n;
                cout << "Ingrese el codigo del producto: "<<endl;
                cin >> n;
                try {
                    int resultado = inventario.search(n);
                    cout << "El producto esta en el inventario"<<endl;
                }
                catch (int n) {
                    cout << "El producto no esta en el inventario"<<endl;
                }
                break;
            case 4:
                inventario.print();
                break;
            case 5:
                cout << "Saliendo del programa"<<endl;
                return -1;
                break;
            default:
                return -1;
                break;
        }
    } while (op !=5);

    return 0;
}
