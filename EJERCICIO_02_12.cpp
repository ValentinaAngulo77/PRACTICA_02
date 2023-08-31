// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 12

// Problema planteado:Un arreglo constante contiene la producci�n en toneladas m�tricas de 6 minerales, y otro
// contiene los nombres de estos minerales, para obtener:
// - Buscar por nombre de mineral y desplegar la producci�n
// - Ordenar del mayor al menor (producci�n) y mostrar:
// Mineral SN= (Producci�n :998.000)
// Mineral SB = (Producci�n :876.500)
// Mineral AU = (Producci�n :786.670)
// Mineral PT= (Producci�n : 636.143)
// Mineral AG= (Producci�n : 135.567)
// Mineral CU = (Producci�n :109.412)
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
    const int numMinerales = 6; // N�mero total de minerales
    vector<string> nombresMinerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    vector<float> producciones = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    vector<Mineral> minerales;

    for (int i = 0; i < numMinerales; ++i) {
        Mineral mineral;
        mineral.nombre = nombresMinerales[i];
        mineral.produccion = producciones[i];
        minerales.push_back(mineral);
    }

    // Ordenar minerales por producci�n de mayor a menor
    sort(minerales.begin(), minerales.end(), compararPorProduccion);

    // Buscar y mostrar producci�n por nombre de mineral
    string nombreBuscado;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> nombreBuscado;

    bool encontrado = false;
    for (const Mineral &mineral : minerales) {
        if (mineral.nombre == nombreBuscado) {
            cout << "Producci�n de " << mineral.nombre << ": " << mineral.produccion << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Mineral no encontrado." << endl;
    }

    // Mostrar minerales ordenados
    cout << "Minerales ordenados por producci�n de mayor a menor:" << endl;
    for (const Mineral &mineral : minerales) {
        cout << "Mineral " << mineral.nombre << " = (Producci�n: " << mineral.produccion << ")" << endl;
    }

    return 0;
}
