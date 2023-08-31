// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 21

// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
// uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanoVectores = 5;
    vector<int> vector1(tamanoVectores);
    vector<int> vector2(tamanoVectores);
    vector<int> vector3(tamanoVectores);

    // Ingresar valores para vector1 y vector2
    cout << "Ingrese valores para el vector1:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese valores para el vector2:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular vector3 = vector1 + vector2
    for (int i = 0; i < tamanoVectores; ++i) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar vector3
    cout << "El vector3 resultante es:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}
