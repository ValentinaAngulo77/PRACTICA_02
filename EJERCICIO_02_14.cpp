// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 14

// Problema planteado:Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
// los números capicúa contenidos en el primero.
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

    cout << "Números capicúa contenidos en el arreglo:" << endl;
    for (int capicua : segundoArreglo) {
        cout << capicua << " ";
    }
    cout << endl;

    return 0;
}
