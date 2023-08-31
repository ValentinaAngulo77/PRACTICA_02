// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la poblaci�n de los nueve departamentos del pa�s y otro que
// contiene los nombres de estos departamentos, genere un b�sico grafico estad�stico que
// muestre esta poblaci�n (utilice un factor de escala), adem�s indique el nombre del
// departamento que tiene la mayor poblaci�n y el nombre del departamento que tiene la menor
// poblaci�n.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numDepartamentos = 9; // N�mero total de departamentos
    vector<string> nombresDepartamentos = {"Departamento1", "Departamento2", "Departamento3", "Departamento4", "Departamento5", "Departamento6", "Departamento7", "Departamento8", "Departamento9"};
    vector<int> poblacion = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};

    // Encontrar la poblaci�n m�xima y su �ndice
    int maxPoblacion = *max_element(poblacion.begin(), poblacion.end());
    int indiceMaxPoblacion = distance(poblacion.begin(), find(poblacion.begin(), poblacion.end(), maxPoblacion));

    // Encontrar la poblaci�n m�nima y su �ndice
    int minPoblacion = *min_element(poblacion.begin(), poblacion.end());
    int indiceMinPoblacion = distance(poblacion.begin(), find(poblacion.begin(), poblacion.end(), minPoblacion));

    // Factor de escala para el gr�fico
    const int factorEscala = 500;

    // Generar gr�fico estad�stico
    cout << "Gr�fico estad�stico de poblaci�n:" << endl;
    for (int i = 0; i < numDepartamentos; ++i) {
        cout << nombresDepartamentos[i] << ": ";
        for (int j = 0; j < poblacion[i] / factorEscala; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Mostrar resultados
    cout << "Departamento con la mayor poblaci�n: " << nombresDepartamentos[indiceMaxPoblacion] << endl;
    cout << "Departamento con la menor poblaci�n: " << nombresDepartamentos[indiceMinPoblacion] << endl;

    return 0;
}

