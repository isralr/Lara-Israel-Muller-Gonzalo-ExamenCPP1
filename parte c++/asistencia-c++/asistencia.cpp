#include "asistencia.h"
#include <iostream>
#include <vector>
#include <regex>
#include <stdexcept>

// Definición de clases de excepción personalizadas
class FechaInvalidaException : public std::runtime_error {
public:
    FechaInvalidaException() : std::runtime_error("Formato de fecha inválido. Use el formato YYYY-MM-DD.") {}
};

class MateriaNoRegistradaException : public std::runtime_error {
public:
    MateriaNoRegistradaException() : std::runtime_error("Error: Materia no registrada.") {}
};

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
    std::regex patron("^\\d{4}-\\d{2}-\\d{2}$");
    return std::regex_match(fecha, patron);
}

// Función para registrar asistencia con excepciones
void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
    if (!esFechaValida(fecha)) {
        throw FechaInvalidaException();
    }
    if (materia != "Matemáticas" && materia != "Física" && materia != "Historia") {
        throw MateriaNoRegistradaException();
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
