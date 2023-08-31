// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 6

// Problema planteado: Dados dos arreglos constantes de igual tama�o, generar un tercer arreglo con los elementos
// intercalados.
#include <iostream>

using namespace std;

int main() {
    const int tamanoArreglo = 5; // Cambia el tama�o seg�n tus necesidades

    int primerArreglo[tamanoArreglo] = {1, 3, 5, 7, 9};
    int segundoArreglo[tamanoArreglo] = {2, 4, 6, 8, 10};
    int tercerArreglo[tamanoArreglo * 2];

    for (int i = 0; i < tamanoArreglo; ++i) {
        tercerArreglo[i * 2] = primerArreglo[i];
        tercerArreglo[i * 2 + 1] = segundoArreglo[i];
    }

    cout << "Tercer arreglo intercalado:" << endl;
    for (int i = 0; i < tamanoArreglo * 2; ++i) {
        cout << tercerArreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
