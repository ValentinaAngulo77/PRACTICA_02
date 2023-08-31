// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 14

// Problema planteado:Un arreglo contiene n�meros al azar entre N y M, crear un segundo arreglo que contenga
// los n�meros capic�a contenidos en el primero.
#include <iostream>
#include <vector>

using namespace std;

bool esCapicua(int num) {
    int original = num;
    int inverso = 0;

    while (num > 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }

    return original == inverso;
}

int main() {
    int N, M;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    cout << "Ingrese el valor de M: ";
    cin >> M;

    vector<int> primerArreglo;
    for (int i = N; i <= M; ++i) {
        primerArreglo.push_back(i);
    }

    vector<int> segundoArreglo;
    for (int num : primerArreglo) {
        if (esCapicua(num)) {
            segundoArreglo.push_back(num);
        }
    }

    cout << "N�meros capic�a contenidos en el arreglo:" << endl;
    for (int capicua : segundoArreglo) {
        cout << capicua << " ";
    }
    cout << endl;

    return 0;
}
