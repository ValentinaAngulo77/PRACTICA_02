// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 25

// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e
indique el mayor elemento, el menor elemento y el promedio.
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> N;

    vector<int> vectorElementos(N);

    srand(time(0));

    // Llenar el vector con valores aleatorios entre 1 y 100
    for (int i = 0; i < N; ++i) {
        vectorElementos[i] = rand() % 100 + 1;
    }

    // Encontrar el mayor y el menor elemento
    int mayorElemento = vectorElementos[0];
    int menorElemento = vectorElementos[0];
    int sumaElementos = vectorElementos[0];

    for (int i = 1; i < N; ++i) {
        if (vectorElementos[i] > mayorElemento) {
            mayorElemento = vectorElementos[i];
        }
        if (vectorElementos[i] < menorElemento) {
            menorElemento = vectorElementos[i];
        }
        sumaElementos += vectorElementos[i];
    }

    // Calcular el promedio
    float promedio = static_cast<float>(sumaElementos) / N;

    // Mostrar resultados
    cout << "Mayor elemento: " << mayorElemento << endl;
    cout << "Menor elemento: " << menorElemento << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
