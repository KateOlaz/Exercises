#ifndef COLA_H
#define COLA_H

#include <fstream>
#include <iostream>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template<class T>
class Cola {
    private:
        Node<T> *raiz;
        Node<T> *fondo;
    public:
        Cola();
        ~Cola();
        void insertar(T);
        int extraer();
        void imprimir();
        bool vacia();
};

#endif
