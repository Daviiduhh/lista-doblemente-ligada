#include <iostream>
#include "ListaDoblementeLigada.h"

using namespace std;

int main() {
    ListaDoblementeLigada<int> enteros;

    enteros.push_front(1);           // insertar al inicio (frente)
    enteros.push_front(2);           // insertar al inicio (frente)
    enteros.push_front(3);           // insertar al inicio (frente)

    enteros << 4 << 5 << 6;          // insertar al final (cola)

    cout << enteros.size() << endl;  // imprime la cantidad de nodos (elementos)

    enteros.print();                 // imprime el elemento de cada nodo

    int *ptr_01 = enteros.find(1); // buscar un elemento
    if (ptr_01) {                    // si no es nulo
        *ptr_01 = 3;                 // cambiar valor
    }

    int *ptr_02 = enteros.find(0);   // buscar un elemento
    if (ptr_02 == nullptr) {         // si es nulo
        enteros << 0;                // inserta al final
    }

    cout << enteros.size() << endl;  // imprime la cantidad de nodos (elementos)

    enteros.print();                 // imprime el elemento de cada nodo
    
    return 0;
}