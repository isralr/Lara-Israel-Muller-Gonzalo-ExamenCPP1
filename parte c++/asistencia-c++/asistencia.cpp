#include "Asistencia.h"
#include <iostream>
#include <vector>
#include <regex>

// Definición de la estructura Asistencia
struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

// Vector para almacenar los registros de asistencia
std::vector<Asistencia> registros;

// Función para validar el formato de la fecha
bool esFechaValida(const std::string& fecha) {
    // Expresión regular para formato de fecha: YYYY-MM-DD
    std::regex patron("^\\d{4}-\\d{2}-\\d{2}$");
    return std::regex_match(fecha, patron);
}

// Función para registrar asistencia con control de errores
void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
    if (!esFechaValida(fecha)) {
        std::cout << "Error: Formato de fecha inválido. Use el formato YYYY-MM-DD.\n";
        return;
    }

    // Aquí se podría validar si la materia está registrada. Si no, lanzar un error.
    if (materia != "Matemáticas" && materia != "Física" && materia != "Historia") {
        std::cout << "Error: Materia no registrada.\n";
        return;
    }

    Asistencia nuevoRegistro = {fecha, materia, estado};
    registros.push_back(nuevoRegistro);
    std::cout << "Asistencia registrada: " << fecha << ", " << materia << ", " << estado << ".\n";
}

// Función para mostrar todos los registros de asistencia
void mostrarAsistencia() {
    std::cout << "\nRegistros de Asistencia:\n";
    for (const auto& registro : registros) {
        std::cout << "- Fecha: " << registro.fecha
                  << ", Materia: " << registro.materia
                  << ", Estado: " << registro.estado << "\n";
    }
}
