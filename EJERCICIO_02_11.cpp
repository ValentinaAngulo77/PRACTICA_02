// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 11

// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
// este arreglo determine la desviaci�n t�pica.
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> edades;
    int edad;

    cout << "Ingrese las edades de las personas (ingrese -1 para finalizar):" << endl;

    while (true) {
        cin >> edad;
        if (edad == -1) {
            break;
        }
        edades.push_back(edad);
    }

    int numEdades = edades.size();

    if (numEdades == 0) {
        cout << "No se ingresaron edades." << endl;
        return 0;
    }

    // Calcular el promedio de las edades
    int sumaEdades = 0;
    for (int i = 0; i < numEdades; ++i) {
        sumaEdades += edades[i];
    }
    float promedioEdades = static_cast<float>(sumaEdades) / numEdades;

    // Calcular la suma de las diferencias al cuadrado
    float sumaDiferenciasCuadrado = 0;
    for (int i = 0; i < numEdades; ++i) {
        float diferencia = edades[i] - promedioEdades;
        sumaDiferenciasCuadrado += diferencia * diferencia;
    }

    // Calcular la desviaci�n est�ndar
    float desviacionEstandar = sqrt(sumaDiferenciasCuadrado / numEdades);

    cout << "La desviaci�n est�ndar de las edades es: " << desviacionEstandar << endl;

    return 0;
}
