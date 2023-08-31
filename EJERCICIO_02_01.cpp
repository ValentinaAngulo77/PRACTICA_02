// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 1

// Problema planteado: Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e imprima la suma de
// los componentes de �ndice par y la resta de los componentes de �ndice impar.
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));


    int N, A, B;
    cout << "Ingrese el tama�o del vector (N): ";
    cin >> N;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    vector<int> numeros(N);

    for (int i = 0; i < N; ++i) {
        numeros[i] = rand() % (B - A + 1) + A;
    }

    int sumaPares = 0;
    int restaImpares = 0;

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sumaPares += numeros[i];
        } else {
            restaImpares -= numeros[i];
        }
    }

    cout << "Vector generado:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Suma de componentes de �ndice par: " << sumaPares << endl;
    cout << "Resta de componentes de �ndice impar: " << restaImpares << endl;

    return 0;
}
