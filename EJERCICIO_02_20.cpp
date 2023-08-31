// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 20

// Problema planteado: Crea un programa que pida un n�mero al usuario un n�mero de mes (por ejemplo, el 4) y
// diga cu�ntos d�as tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
// simplificarlo vamos a suponer que febrero tiene 28 d�as.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> nombresMeses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    vector<int> diasMeses = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int numeroMes;

    cout << "Ingrese un n�mero de mes (1-12): ";
    cin >> numeroMes;

    if (numeroMes >= 1 && numeroMes <= 12) {
        string nombreMes = nombresMeses[numeroMes - 1];
        int dias = diasMeses[numeroMes - 1];

        cout << "El mes de " << nombreMes << " tiene " << dias << " d�as." << endl;
    } else {
        cout << "N�mero de mes inv�lido." << endl;
    }

    return 0;
}
