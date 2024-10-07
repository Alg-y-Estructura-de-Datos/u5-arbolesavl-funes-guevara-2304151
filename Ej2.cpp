/*Ejercicio N°2
Imagina que trabajas en una tienda que vende una variedad de productos. Cada producto tiene un código único que lo identifica y necesitas gestionar
 el inventario utilizando un árbol AVL para asegurarte de que el sistema esté optimizado y balanceado.
 Los productos se identifican únicamente por su código, y no hay productos duplicados en el inventario.
Opciones del menú:
1.	Agregar producto: Inserta un nuevo código de producto en el sistema.
2.	Eliminar producto: Elimina un código de producto del sistema.
3.	Buscar producto: Verifica si un código de producto existe en el inventario.
4.	Mostrar inventario: Imprime el árbol AVL de productos para mostrar su estructura balanceada.
5.	Salir: Finaliza el programa.*/

#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

int main() {
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
