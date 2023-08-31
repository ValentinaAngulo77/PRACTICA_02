// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 13

// Problema planteado:Almacenar en un arreglo los n primeros números primos.
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
    cout << "Ingrese la cantidad de números primos a almacenar: ";
    cin >> n;

    vector<int> numerosPrimos;

    int num = 2;
    while (numerosPrimos.size() < n) {
        if (esPrimo(num)) {
            numerosPrimos.push_back(num);
        }
        ++num;
    }

    cout << "Los primeros " << n << " números primos son:" << endl;
    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
