//
// Created by cbalb on 28/02/2026.
//

#include "Stack.h"
#include <memory>
#include <iostream>
#include <vector>
using namespace std;

//Constructor Struct Node
Stack::Node::Node(int v){
    this->value=v;
    this->ptr_Next=nullptr;
}

Stack::Node::Node(int v, shared_ptr<Node> node) {
    this->value=v;
    this->ptr_Next=node;
}

bool Stack::empty() {
    if (ptr_Top==nullptr) {
        cout << "Stack vacio"<<endl;
        return true;
    }
    else {
        cout << "Stack No vacio"<<endl;
        return false;
    }
}

int Stack::top() {
    return ptr_Top->value;
}

void Stack::pop() {
    if (ptr_Top!=nullptr) {
        int i = ptr_Top->value;
        cout << "Elemento eliminado: "<< i << endl;
        ptr_Top = ptr_Top->ptr_Next;
        sizeStack--;
    }
}

void Stack::push(int v) {
    ptr_Top=make_shared<Node>(v, ptr_Top);
    sizeStack++;
}

int Stack::size() {
    return sizeStack;
}


/*  =============================================
    Funciones para mostrar por pantalla el Stack
    usando la recursividad
    =============================================   */

void Stack::printAscendente(shared_ptr<Node> node) const{     //Funcion print privada
    if (node==nullptr) {                //caso base
        return;
    }
    printAscendente(node->ptr_Next);    //Se baja hasta el final
    cout << node->value << " ";         //Se imprime al volver
}

void Stack::printDescendente(shared_ptr<Node> node) const{     //Funcion print privada
    if (node==nullptr) {                //caso base
        return;
    }
    cout << node->value << " ";         //Se imprime
    printDescendente(node->ptr_Next);   //Luego se baja
}

void Stack::printBottom2Top() {
    cout << "Stack en orden ascendente: ";
    printAscendente(ptr_Top);
    cout << endl;
}

void Stack::printTop2Bottom() {
    cout << "Stack en orden descendente: ";
    printDescendente(ptr_Top);
    cout << endl;
}
