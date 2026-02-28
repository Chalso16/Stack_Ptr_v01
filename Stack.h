//
// Created by cbalb on 28/02/2026.
//

#ifndef STACK_PTR_V01_STACK_H
#define STACK_PTR_V01_STACK_H
#include <memory>
using namespace std;

class Stack {
private:
    struct Node {
        int value;
        shared_ptr<Node> ptr_Next;

        Node(int v);    //declaracion constructor struct por defecto
        Node(int v, shared_ptr<Node> node);     //constructor con parametros
    };

    shared_ptr<Node> ptr_Top;   //Ptr Top
    int sizeStack=0;

    void printAscendente(shared_ptr<Node> node) const;      //mostrar por pantalla de abajo a arriba
    void printDescendente(shared_ptr<Node> node) const;     //mostrar por pantalla de arriba a abajo

public:
    bool empty();               //.empty
    int top();                  //.top
    void pop();                 //.pop
    void push(int v);           //.push
    void printTop2Bottom();     //.print
    void printBottom2Top();     //.print
    int size();                //.size
};

#endif //STACK_PTR_V01_STACK_H