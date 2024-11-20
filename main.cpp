#include "parte c++/estudiante-c++/estudiante.h"
#include "parte c++/asistencia-c++/asistencia.h"

#include "parte c/estudiante-c/estudiante.h"
#include "parte c/asistencia-c/asistencia.h"



int main() {
    //Parte C++

    // Gestión de estudiantes
    gestionarEstudiante();

    // Gestión de asistencias con manejo de excepciones
    registrarAsistencia("2024-11-18", "Matemáticas", "asistió"); // Correcto
    registrarAsistencia("18-11-2024", "Física", "tardanza");    // Error: formato de fecha inválido
    registrarAsistencia("2024-11-18", "Historia", "asistió");  // Error: materia no registrada
    mostrarAsistencia();


    //Parte C
    Estudiante estudiante;
    Asistencia asistencia;

    // Inicializar estudiante
    inicializarEstudiante(&estudiante, "Juan Perez", 20, 8.5);
    agregarMateria(&estudiante, "Matematicas");
    agregarMateria(&estudiante, "Fisica");
    eliminarMateria(&estudiante, "Quimica"); // Materia no existente
    mostrarEstudiante(&estudiante);

    // Registrar asistencia
    registrarAsistencia(&asistencia, "2024-11-19", "Matematicas", "Asistio");
    mostrarAsistencia(&asistencia);


    return 0;
}