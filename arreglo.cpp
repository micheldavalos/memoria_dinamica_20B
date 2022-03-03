#include "arreglo.h"

Arreglo::Arreglo()
{
    arreglo = new int[MAX];
    cont = 0;
    tam = MAX;
}

Arreglo::Arreglo(const Arreglo& a)
{
    arreglo = new int[a.tam];
    cont = 0;

    for (size_t i = 0; i < a.tam; i++)
    {
        arreglo[i] = a.at(i);
    }
    
    cont = a.tam;
    tam = a.tam;
}

Arreglo::~Arreglo()
{
    delete[] arreglo;
}

Arreglo& Arreglo::operator=(const Arreglo& a)
{
    if (this != &a) {
        int *nuevo = new int[tam+MAX];

        for (size_t i = 0; i < cont; i++) {
            nuevo[i] = arreglo[i];
        }

        // copy(a.arreglo, a.arreglo + a.cont, nuevo);

        delete[] arreglo;

        arreglo = nuevo;
        
        cont = a.tam;
        tam = a.tam;
    }

    return *this;
}

void Arreglo::insertar_final(int v)
{
    if (cont == tam) {
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}
void Arreglo::insertar_inicio(int v)
{
    if (cont == tam) {
        expandir();
    }
    for (size_t i = cont; i > 0; i--) {
        arreglo[i] = arreglo[i-1]; 
    }
    arreglo[0] = v;
    cont++;
}

size_t Arreglo::size()
{
    return cont;
}

void Arreglo::expandir()
{
    int *nuevo = new int[tam+MAX];

    for (size_t i = 0; i < cont; i++) {
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}