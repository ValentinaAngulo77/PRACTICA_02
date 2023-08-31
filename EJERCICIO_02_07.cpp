// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra �Iguales� si ambos vectores son iguales y
// �Diferentes� si no lo son. Ser�n iguales cuando en la misma posici�n de ambos vectores se
// tenga el mismo valor para todos los elementos.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int tamanoVectores = 7;

    vector<string> primerVector = {"Ana", "Juan", "Luis", "Mar�a", "Carlos", "Sof�a", "Pedro"};
    vector<string> segundoVector = {"Ana", "Juan", "Luis", "Mar�a", "Carlos", "Sof�a", "Pedro"};

    bool iguales = true;

    for (int i = 0; i < tamanoVectores; ++i) {
        if (primerVector[i] != segundoVector[i]) {
            iguales = false;
            break;
        }
    }

    if (iguales) {
        cout << "Iguales" << endl;
    } else {
        cout << "Diferentes" << endl;
    }

    return 0;
}
