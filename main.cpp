#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

void mostrar(const Arreglo& arreglo)
{
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo.at(i) << " ";
    }
    cout << endl;
}

int main() 
{
    Arreglo arreglo;
    arreglo.insertar_final(10);
    arreglo.insertar_final(0);
    arreglo.insertar_final(1);
    arreglo.insertar_final(4);
    arreglo.insertar_inicio(-10);
    cout << "arreglo" << endl;
    mostrar(arreglo);

    // for (size_t i = 0; i < arreglo.size(); i++)
    // {
    //     cout << arreglo[i] << " ";
    // }
    
    // Arreglo arreglo02 = arreglo;
    Arreglo arreglo02;
    arreglo02 = arreglo;
    cout << "arreglo02" << endl;
    mostrar(arreglo02);

    arreglo.insertar_inicio(55);
    cout << "arreglo" << endl;
    mostrar(arreglo);

    cout << "arreglo02" << endl;
    mostrar(arreglo02);


    // int *b = nullptr;
    // b = new int[100];
    // cout << b << " " << *b << endl;
    // delete[] b;
    // int a = 12;

    // cout << a << endl;
    // cout << &a << endl;
    // modificar(&a);
    // cout << a << endl;


    return 0;
}