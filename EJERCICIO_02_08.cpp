// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 8

// Problema planteado: Se tiene el arreglo
// Ventas:
// 0:vene, 1:vfeb, 2:vmar, 10:vnov, 11:vdic
// Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
// contiene los nombres de los meses:
// Meses:
// �0:Ene� �1:Feb� �2:Mar� . . �10:Nov� �11:Dic�
// Escriba un programa que obtenga:
// � �En qu� mes(es) se dieron las ventas m�ximas de la empresa?
// � �A cu�nto ascendieron las ventas m�ximas?
// � �Cu�l fue el total de las ventas?
// Las ventas deben ser ingresadas por teclado.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int numMeses = 12; // N�mero total de meses
    vector<int> ventas(numMeses);
    vector<string> nombresMeses = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    // Ingresar ventas mensuales
    for (int i = 0; i < numMeses; ++i) {
        cout << "Ingrese las ventas de " << nombresMeses[i] << ": ";
        cin >> ventas[i];
    }

    // Encontrar ventas m�ximas y su mes(es)
    int maxVentas = ventas[0];
    vector<int> mesesMaxVentas;

    for (int i = 1; i < numMeses; ++i) {
        if (ventas[i] > maxVentas) {
            maxVentas = ventas[i];
            mesesMaxVentas.clear();
            mesesMaxVentas.push_back(i);
        } else if (ventas[i] == maxVentas) {
            mesesMaxVentas.push_back(i);
        }
    }

    // Calcular el total de ventas
    int totalVentas = 0;
    for (int venta : ventas) {
        totalVentas += venta;
    }

    // Mostrar resultados
    cout << "Meses con ventas m�ximas: ";
    for (int mes : mesesMaxVentas) {
        cout << nombresMeses[mes] << " ";
    }
    cout << endl;

    cout << "Ventas m�ximas: " << maxVentas << endl;
    cout << "Total de ventas: " << totalVentas << endl;

    return 0;
}
