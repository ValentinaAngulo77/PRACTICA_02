// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 17

// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la
nota más alta que ha sacado y la menor.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int numNotas = 5;
    vector<int> notas(numNotas);

    // Leer las notas por teclado
    for (int i = 0; i < numNotas; ++i) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    // Mostrar todas las notas
    cout << "Notas obtenidas:" << endl;
    for (int nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

    // Calcular la nota media
    int sumaNotas = 0;
    for (int nota : notas) {
        sumaNotas += nota;
    }
    float notaMedia = static_cast<float>(sumaNotas) / numNotas;

    // Encontrar la nota más alta y la menor
    int notaMaxima = *max_element(notas.begin(), notas.end());
    int notaMinima = *min_element(notas.begin(), notas.end());

    // Mostrar resultados
    cout << "Nota media: " << notaMedia << endl;
    cout << "Nota más alta: " << notaMaxima << endl;
    cout << "Nota más baja: " << notaMinima << endl;

    return 0;
}
