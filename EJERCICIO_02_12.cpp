// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 12

// Problema planteado:Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
// contiene los nombres de estos minerales, para obtener:
// - Buscar por nombre de mineral y desplegar la producción
// - Ordenar del mayor al menor (producción) y mostrar:
// Mineral SN= (Producción :998.000)
// Mineral SB = (Producción :876.500)
// Mineral AU = (Producción :786.670)
// Mineral PT= (Producción : 636.143)
// Mineral AG= (Producción : 135.567)
// Mineral CU = (Producción :109.412)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Mineral {
    string nombre;
    float produccion;
};

bool compararPorProduccion(const Mineral &a, const Mineral &b) {
    return a.produccion > b.produccion;
}

int main() {
    const int numMinerales = 6; // Número total de minerales
    vector<string> nombresMinerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    vector<float> producciones = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    vector<Mineral> minerales;

    for (int i = 0; i < numMinerales; ++i) {
        Mineral mineral;
        mineral.nombre = nombresMinerales[i];
        mineral.produccion = producciones[i];
        minerales.push_back(mineral);
    }

    // Ordenar minerales por producción de mayor a menor
    sort(minerales.begin(), minerales.end(), compararPorProduccion);

    // Buscar y mostrar producción por nombre de mineral
    string nombreBuscado;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> nombreBuscado;

    bool encontrado = false;
    for (const Mineral &mineral : minerales) {
        if (mineral.nombre == nombreBuscado) {
            cout << "Producción de " << mineral.nombre << ": " << mineral.produccion << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Mineral no encontrado." << endl;
    }

    // Mostrar minerales ordenados
    cout << "Minerales ordenados por producción de mayor a menor:" << endl;
    for (const Mineral &mineral : minerales) {
        cout << "Mineral " << mineral.nombre << " = (Producción: " << mineral.produccion << ")" << endl;
    }

    return 0;
}
