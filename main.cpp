#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    Stack pila;                                                             //declaramos Stack
    pila.empty();                                                           //comprobamos si esta vacio (vacio)
    for (int i=0; i<10; i++) {                                             //Lo llenamos de valores
        pila.push(i);
    }
    pila.empty();                                                           //comprobamos si esta vacio (lleno)
    cout << "\nEl valor del elemento de la cima es: "<<pila.top()<<endl;
    pila.printTop2Bottom();
    cout << "El size del Stack es: "<< pila.size()<<endl;
    cout << endl;

    pila.pop();                                                             //eliminamos el primer elemento
    cout << "\nEl valor del elemento de la cima es: "<<pila.top()<<endl;
    pila.printBottom2Top();
    cout << "El size del Stack es: "<< pila.size()<<endl;

    return 0;
}