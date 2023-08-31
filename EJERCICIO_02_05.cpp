// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 5

// Problema planteado:Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese el número de personas: ";
    cin >> N;

    int estaturas[N];
    int mayorEstatura = INT_MIN;
    int menorEstatura = INT_MAX;
    int sumaEstaturas = 0;

    for (int i = 0; i < N; ++i) {
        estaturas[i] = rand() % 191 + 50; // Genera estaturas entre 50 y 240 cm

        mayorEstatura = max(mayorEstatura, estaturas[i]);
        menorEstatura = min(menorEstatura, estaturas[i]);
        sumaEstaturas += estaturas[i];
    }

    float promedioEstaturas = static_cast<float>(sumaEstaturas) / N;

    cout << "Mayor estatura: " << mayorEstatura << " cm" << endl;
    cout << "Menor estatura: " << menorEstatura << " cm" << endl;
    cout << "Promedio de estaturas: " << promedioEstaturas << " cm" << endl;

    return 0;
}
