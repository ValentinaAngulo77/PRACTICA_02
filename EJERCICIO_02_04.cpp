// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 4

// Problema planteado:  Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int tamanoArreglo = 50;
    int arreglo[tamanoArreglo];

    int mayores = 0;
    int menores = 0;

    for (int i = 0; i < tamanoArreglo; ++i) {
        arreglo[i] = rand() % 110 + 1; // Genera edades entre 1 y 110 años

        if (arreglo[i] >= 18) {
            mayores++;
        } else {
            menores++;
        }
    }

    float porcentajeMayores = (static_cast<float>(mayores) / tamanoArreglo) * 100;
    float porcentajeMenores = (static_cast<float>(menores) / tamanoArreglo) * 100;

    cout << "Porcentaje de personas mayores de edad: " << porcentajeMayores << "%" << endl;
    cout << "Porcentaje de personas menores de edad: " << porcentajeMenores << "%" << endl;

    return 0;
}

