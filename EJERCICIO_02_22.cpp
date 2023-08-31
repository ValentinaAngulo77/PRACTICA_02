// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 22

// Problema planteado: Leer 2 vectores de dimensi�n N y calcule la multiplicaci�n de los mismos en otro vector.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la dimensi�n de los vectores: ";
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

    // Calcular la multiplicaci�n de los vectores
    for (int i = 0; i < N; ++i) {
        vectorResultado[i] = vector1[i] * vector2[i];
    }

    // Mostrar el vector resultado
    cout << "El vector resultado de la multiplicaci�n es:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vectorResultado[i] << " ";
    }
    cout << endl;

    return 0;
}
