// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
// contiene los nombres de estos departamentos, genere un básico grafico estadístico que
// muestre esta población (utilice un factor de escala), además indique el nombre del
// departamento que tiene la mayor población y el nombre del departamento que tiene la menor
// población.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numDepartamentos = 9; // Número total de departamentos
    vector<string> nombresDepartamentos = {"Departamento1", "Departamento2", "Departamento3", "Departamento4", "Departamento5", "Departamento6", "Departamento7", "Departamento8", "Departamento9"};
    vector<int> poblacion = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};

    // Encontrar la población máxima y su índice
    int maxPoblacion = *max_element(poblacion.begin(), poblacion.end());
    int indiceMaxPoblacion = distance(poblacion.begin(), find(poblacion.begin(), poblacion.end(), maxPoblacion));

    // Encontrar la población mínima y su índice
    int minPoblacion = *min_element(poblacion.begin(), poblacion.end());
    int indiceMinPoblacion = distance(poblacion.begin(), find(poblacion.begin(), poblacion.end(), minPoblacion));

    // Factor de escala para el gráfico
    const int factorEscala = 500;

    // Generar gráfico estadístico
    cout << "Gráfico estadístico de población:" << endl;
    for (int i = 0; i < numDepartamentos; ++i) {
        cout << nombresDepartamentos[i] << ": ";
        for (int j = 0; j < poblacion[i] / factorEscala; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Mostrar resultados
    cout << "Departamento con la mayor población: " << nombresDepartamentos[indiceMaxPoblacion] << endl;
    cout << "Departamento con la menor población: " << nombresDepartamentos[indiceMinPoblacion] << endl;

    return 0;
}

