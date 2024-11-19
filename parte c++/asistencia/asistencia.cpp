#include "Asistencia.h"
#include <iostream>
#include <vector>

// Definición de la estructura Asistencia
struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

// Vector para almacenar los registros de asistencia
std::vector<Asistencia> registros;

// Función para registrar asistencia
void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
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
