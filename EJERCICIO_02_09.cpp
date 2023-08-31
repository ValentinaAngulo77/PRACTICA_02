// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
// arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
// desempeño mayor con relación al promedio del curso.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numEstudiantes = 5; // Número total de estudiantes
    vector<string> nombres = {"Juan", "María", "Pedro", "Ana", "Luis"};
    vector<int> calificaciones = {95, 85, 70, 92, 78};
    vector<string> carreras = {"CS", "EC", "CS", "EC", "IS"};

    // Encontrar calificación máxima y su índice
    int maxCalificacion = *max_element(calificaciones.begin(), calificaciones.end());
    int indiceMaxCalificacion = distance(calificaciones.begin(), find(calificaciones.begin(), calificaciones.end(), maxCalificacion));

    // Encontrar calificación mínima y su índice
    int minCalificacion = *min_element(calificaciones.begin(), calificaciones.end());
    int indiceMinCalificacion = distance(calificaciones.begin(), find(calificaciones.begin(), calificaciones.end(), minCalificacion));

    // Calcular el promedio del curso
    int sumaCalificaciones = 0;
    for (int calificacion : calificaciones) {
        sumaCalificaciones += calificacion;
    }
    float promedioCurso = static_cast<float>(sumaCalificaciones) / numEstudiantes;

    // Determinar la carrera con mejor desempeño
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
    cout << "Alumno con la calificación más alta: " << nombres[indiceMaxCalificacion] << endl;
    cout << "Alumno con la calificación más baja: " << nombres[indiceMinCalificacion] << endl;
    cout << "Carrera con mejor desempeño: " << mejorCarrera << endl;

    return 0;
}
