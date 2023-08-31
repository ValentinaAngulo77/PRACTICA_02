// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 18

// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
// hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
// vector (sólo los elementos introducidos).
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanoVector = 10;
    vector<int> numeros(tamanoVector);
    int numero;

    int indice = 0;

    cout << "Ingrese números para rellenar el vector (hasta " << tamanoVector << " números o un número negativo para finalizar):" << endl;

    while (indice < tamanoVector) {
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero < 0) {
            break;
        }

        numeros[indice] = numero;
        ++indice;
    }

    cout << "Elementos del vector introducidos:" << endl;
    for (int i = 0; i < indice; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

