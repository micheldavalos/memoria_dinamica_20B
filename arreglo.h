#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

class Arreglo
{
    int *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    Arreglo();
    Arreglo(const Arreglo& a);
    ~Arreglo();
    
    Arreglo& operator=(const Arreglo& a);
    
    void insertar_final(int v);
    void insertar_inicio(int v);
    size_t size();

    int operator[](size_t p)
    {
        return arreglo[p];
    }

    int at(size_t p) const
    {
        return arreglo[p];
    }
private:
    void expandir();
};

#endif