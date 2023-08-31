// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 13

// Problema planteado:Almacenar en un arreglo los n primeros n�meros primos.
#include <iostream>
#include <vector>

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
    int n;
    cout << "Ingrese la cantidad de n�meros primos a almacenar: ";
    cin >> n;

    vector<int> numerosPrimos;

    int num = 2;
    while (numerosPrimos.size() < n) {
        if (esPrimo(num)) {
            numerosPrimos.push_back(num);
        }
        ++num;
    }

    cout << "Los primeros " << n << " n�meros primos son:" << endl;
    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
