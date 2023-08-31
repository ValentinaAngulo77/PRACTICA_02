// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 19

// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
// ordene los elementos de menor a mayor.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int tamanoVector = 10;
    vector<int> numeros(tamanoVector);

    srand(time(0));

    // Inicializar el vector con valores aleatorios
    for (int i = 0; i < tamanoVector; ++i) {
        numeros[i] = rand() % 100; // Valores aleatorios entre 0 y 99
    }

    // Mostrar el vector antes de ordenar
    cout << "Vector antes de ordenar:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Ordenar el vector de menor a mayor
    sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    cout << "Vector ordenado de menor a mayor:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
