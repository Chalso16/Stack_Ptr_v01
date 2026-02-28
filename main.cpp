#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    Stack pila;                     //declaramos Stack
    pila.empty();                   //comprobamos si esta vacio (vacio)
    for (int i=0; i<=10; i++) {     //Lo llenamos de valores
        pila.push(i);
    }
    pila.empty();                   //comprobamos si esta vacio (lleno)
    pila.printTop2Bottom();
    cout << "El valor del elemento de la cima es: "<<pila.top()<<endl;

    pila.pop();                     //eliminamos el primer elemento
    pila.printTop2Bottom();
    cout << "El valor del elemento de la cima es: "<<pila.top()<<endl;

    pila.printBottom2Top();
    return 0;
}