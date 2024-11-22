#include "parte c++/estudiante-c++/estudiante.h"
#include "parte c++/asistencia-c++/asistencia.h"

#include "parte c/estudiante-c/estudiante.h"
#include "parte c/asistencia-c/asistencia.h"
#include <iostream>

int main() {
    // Parte C++
    std::cout << "=== Parte C++ ===\n";

    // Gestión de estudiantes
    gestionarEstudiante();  // Esto llama a la función gestionarEstudiante definida en C++

    // Gestión de asistencias con manejo de excepciones
    try {
        registrarAsistencia("2024-11-18", "Matemáticas", "asistió"); // Correcto
        registrarAsistencia("18-11-2024", "Física", "tardanza");    // Error: formato de fecha inválido
        registrarAsistencia("2024-11-18", "Historia", "asistió");  // Error: materia no registrada
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    mostrarAsistencia(); // Mostrar asistencias registradas en C++

    // Parte C
    std::cout << "\n=== Parte C ===\n";

    Estudiante estudiante;
    Asistencia asistencia;

    // Inicializar estudiante
    inicializarEstudiante(&estudiante, "Juan Perez", 20, 8.5);
    agregarMateria(&estudiante, "Matematicas");
    agregarMateria(&estudiante, "Fisica");
    eliminarMateria(&estudiante, "Quimica"); // Materia no existente
    mostrarEstudiante(&estudiante);

    // Registrar asistencia
    int resultado = registrarAsistencia(&asistencia, "2024-11-19", "Matematicas", "Asistio");
    if (resultado == -1) {
        std::cout << "Error: Formato de fecha inválido.\n";
    } else if (resultado == -2) {
        std::cout << "Error: Materia no registrada.\n";
    } else {
        mostrarAsistencia(&asistencia);
    }

    return 0;
}