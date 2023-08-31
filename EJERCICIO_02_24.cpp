// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 24

// Problema planteado:Leer una cadena en mayúsculas y cámbielas en mayúsculas
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena en mayúsculas: ";
    getline(cin, cadena);

    // Convertir la cadena a minúsculas
    transform(cadena.begin(), cadena.end(), cadena.begin(), ::tolower);

    cout << "La cadena en minúsculas es: " << cadena << endl;

    return 0;
}
