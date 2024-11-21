// estudiante.cpp
#include "Estudiante.h"
#include <iostream>
#include <vector>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};

// Implementación de la función gestionarEstudiante
void gestionarEstudiante() {
    Estudiante estudiante1 = {"Juan Pérez", 20, 8.5, {"Matemáticas", "Física"}};

    // Mostrar información del estudiante
    std::cout << "Nombre: " << estudiante1.nombre
              << ", Edad: " << estudiante1.edad
              << ", Promedio: " << estudiante1.promedio << std::endl;

    // Mostrar materias inscritas
    std::cout << "Materias inscritas:\n";
    for (const auto& materia : estudiante1.materias) {
        std::cout << "- " << materia << "\n";
    }
}

