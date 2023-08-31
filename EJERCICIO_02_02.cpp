// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos.
#include <iostream>

using namespace std;

int main() {
    const int tamanoArreglo = 10;
    int arreglo[tamanoArreglo] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11};

    int paresPositivos = 0;
    int imparesNegativos = 0;

    for (int i = 0; i < tamanoArreglo; ++i) {
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) {
            paresPositivos++;
        } else if (arreglo[i] % 2 != 0 && arreglo[i] < 0) {
            imparesNegativos++;
        }
    }

    float porcentajeParesPositivos = (static_cast<float>(paresPositivos) / tamanoArreglo) * 100;
    float porcentajeImparesNegativos = (static_cast<float>(imparesNegativos) / tamanoArreglo) * 100;

    cout << "Porcentaje de números pares positivos: " << porcentajeParesPositivos << "%" << endl;
    cout << "Porcentaje de números impares negativos: " << porcentajeImparesNegativos << "%" << endl;

    return 0;
}
