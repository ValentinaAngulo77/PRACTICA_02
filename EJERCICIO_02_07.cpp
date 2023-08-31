// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
// “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
// tenga el mismo valor para todos los elementos.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int tamanoVectores = 7;

    vector<string> primerVector = {"Ana", "Juan", "Luis", "María", "Carlos", "Sofía", "Pedro"};
    vector<string> segundoVector = {"Ana", "Juan", "Luis", "María", "Carlos", "Sofía", "Pedro"};

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
