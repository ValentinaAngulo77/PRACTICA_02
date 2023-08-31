// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 15

// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
// valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
// junto con su cuadrado y su cubo.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));

    const int tamanoVector = 10;
    int vectorEnteros[tamanoVector];

    // Inicializar el vector con valores aleatorios del 1 al 10
    for (int i = 0; i < tamanoVector; ++i) {
        vectorEnteros[i] = rand() % 10 + 1;
    }

    // Mostrar cada elemento del vector junto con su cuadrado y cubo
    for (int i = 0; i < tamanoVector; ++i) {
        cout << "Elemento: " << vectorEnteros[i]
             << ", Cuadrado: " << pow(vectorEnteros[i], 2)
             << ", Cubo: " << pow(vectorEnteros[i], 3) << endl;
    }

    return 0;
}
