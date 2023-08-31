// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 20

// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
// diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
// simplificarlo vamos a suponer que febrero tiene 28 días.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> nombresMeses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    vector<int> diasMeses = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int numeroMes;

    cout << "Ingrese un número de mes (1-12): ";
    cin >> numeroMes;

    if (numeroMes >= 1 && numeroMes <= 12) {
        string nombreMes = nombresMeses[numeroMes - 1];
        int dias = diasMeses[numeroMes - 1];

        cout << "El mes de " << nombreMes << " tiene " << dias << " días." << endl;
    } else {
        cout << "Número de mes inválido." << endl;
    }

    return 0;
}
