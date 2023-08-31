// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 22

// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la dimensión de los vectores: ";
    cin >> N;

    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vectorResultado(N);

    // Ingresar valores para el vector1
    cout << "Ingrese los valores para el vector1:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Ingresar valores para el vector2
    cout << "Ingrese los valores para el vector2:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la multiplicación de los vectores
    for (int i = 0; i < N; ++i) {
        vectorResultado[i] = vector1[i] * vector2[i];
    }

    // Mostrar el vector resultado
    cout << "El vector resultado de la multiplicación es:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vectorResultado[i] << " ";
    }
    cout << endl;

    return 0;
}
