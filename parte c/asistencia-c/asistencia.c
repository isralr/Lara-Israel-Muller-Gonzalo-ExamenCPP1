#include "asistencia.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Función para validar formato y contenido de la fecha
int esFechaValida(const char* fecha) {
    if (strlen(fecha) != 10) return 0;

    // Verificar que los caracteres específicos sean '-'
    if (fecha[4] != '-' || fecha[7] != '-') return 0;

    // Extraer los valores de año, mes y día
    char anioStr[5], mesStr[3], diaStr[3];
    strncpy(anioStr, fecha, 4); anioStr[4] = '\0';
    strncpy(mesStr, fecha + 5, 2); mesStr[2] = '\0';
    strncpy(diaStr, fecha + 8, 2); diaStr[2] = '\0';

    // Convertir a enteros
    int anio = atoi(anioStr);
    int mes = atoi(mesStr);
    int dia = atoi(diaStr);

    // Validar rangos
    if (anio < 1900 || anio > 2100) return 0;
    if (mes < 1 || mes > 12) return 0;
    if (dia < 1 || dia > 31) return 0;

    // Validar días por mes
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) return 0;
    if (mes == 2) {
        int esBisiesto = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
        if (dia > 28 + esBisiesto) return 0;
    }

    return 1; // Fecha válida
}

// Función para registrar asistencia
int registrarAsistencia(Asistencia* asistencia, const char* fecha, const char* materia, const char* estado) {
    // Validar formato de fecha
    if (!esFechaValida(fecha)) {
        printf("Error: Formato de fecha inválido. Use el formato YYYY-MM-DD.\n");
        return -1;
    }

    // Validar materias permitidas
    if (strcmp(materia, "Matematicas") != 0 &&
        strcmp(materia, "Fisica") != 0 &&
        strcmp(materia, "Historia") != 0) {
        printf("Error: Materia no registrada.\n");
        return -2;
    }

    // Registrar los valores en la estructura
    strncpy(asistencia->fecha, fecha, sizeof(asistencia->fecha) - 1);
    strncpy(asistencia->materia, materia, sizeof(asistencia->materia) - 1);
    strncpy(asistencia->estado, estado, sizeof(asistencia->estado) - 1);

    printf("Asistencia registrada: Fecha: %s, Materia: %s, Estado: %s\n",
           asistencia->fecha, asistencia->materia, asistencia->estado);
    return 0;
}

// Función para mostrar los datos de asistencia
void mostrarAsistencia(const Asistencia* asistencia) {
    printf("Fecha: %s\n", asistencia->fecha);
    printf("Materia: %s\n", asistencia->materia);
    printf("Estado: %s\n", asistencia->estado);
}

