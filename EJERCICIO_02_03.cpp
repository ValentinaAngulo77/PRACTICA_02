// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 3

// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
// rango de A - B y determine cuántos de estos elementos son números primos.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(0));

    const int tamanoArreglo = 50;
    int A, B;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    int arreglo[tamanoArreglo];
    int cantidadPrimos = 0;

    for (int i = 0; i < tamanoArreglo; ++i) {
        arreglo[i] = rand() % (B - A + 1) + A;
        if (esPrimo(arreglo[i])) {
            cantidadPrimos++;
        }
    }

    cout << "Arreglo generado:" << endl;
    for (int i = 0; i < tamanoArreglo; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Cantidad de números primos en el arreglo: " << cantidadPrimos << endl;

    return 0;
}
