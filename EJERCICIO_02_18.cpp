// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 18

// Problema planteado: Programa que declare un vector de diez elementos enteros y pida n�meros para rellenarlo
// hasta que se llene el vector o se introduzca un n�mero negativo. Entonces se debe imprimir el
// vector (s�lo los elementos introducidos).
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanoVector = 10;
    vector<int> numeros(tamanoVector);
    int numero;

    int indice = 0;

    cout << "Ingrese n�meros para rellenar el vector (hasta " << tamanoVector << " n�meros o un n�mero negativo para finalizar):" << endl;

    while (indice < tamanoVector) {
        cout << "Ingrese un n�mero: ";
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

