// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 24

// Problema planteado:Leer una cadena en may�sculas y c�mbielas en may�sculas
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena en may�sculas: ";
    getline(cin, cadena);

    // Convertir la cadena a min�sculas
    transform(cadena.begin(), cadena.end(), cadena.begin(), ::tolower);

    cout << "La cadena en min�sculas es: " << cadena << endl;

    return 0;
}
