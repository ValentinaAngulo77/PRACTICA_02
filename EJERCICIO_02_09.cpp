// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
// arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, adem�s mostrar que carrera tuvo un
// desempe�o mayor con relaci�n al promedio del curso.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numEstudiantes = 5; // N�mero total de estudiantes
    vector<string> nombres = {"Juan", "Mar�a", "Pedro", "Ana", "Luis"};
    vector<int> calificaciones = {95, 85, 70, 92, 78};
    vector<string> carreras = {"CS", "EC", "CS", "EC", "IS"};

    // Encontrar calificaci�n m�xima y su �ndice
    int maxCalificacion = *max_element(calificaciones.begin(), calificaciones.end());
    int indiceMaxCalificacion = distance(calificaciones.begin(), find(calificaciones.begin(), calificaciones.end(), maxCalificacion));

    // Encontrar calificaci�n m�nima y su �ndice
    int minCalificacion = *min_element(calificaciones.begin(), calificaciones.end());
    int indiceMinCalificacion = distance(calificaciones.begin(), find(calificaciones.begin(), calificaciones.end(), minCalificacion));

    // Calcular el promedio del curso
    int sumaCalificaciones = 0;
    for (int calificacion : calificaciones) {
        sumaCalificaciones += calificacion;
    }
    float promedioCurso = static_cast<float>(sumaCalificaciones) / numEstudiantes;

    // Determinar la carrera con mejor desempe�o
    string mejorCarrera;
    int diferenciaPromedio = 0;

    for (int i = 0; i < numEstudiantes; ++i) {
        if (calificaciones[i] > promedioCurso) {
            int diferencia = calificaciones[i] - promedioCurso;
            if (diferencia > diferenciaPromedio) {
                diferenciaPromedio = diferencia;
                mejorCarrera = carreras[i];
            }
        }
    }

    // Mostrar resultados
    cout << "Alumno con la calificaci�n m�s alta: " << nombres[indiceMaxCalificacion] << endl;
    cout << "Alumno con la calificaci�n m�s baja: " << nombres[indiceMinCalificacion] << endl;
    cout << "Carrera con mejor desempe�o: " << mejorCarrera << endl;

    return 0;
}
