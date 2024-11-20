//
// Created by gonza on 19/11/2024.
//
#include "asistencia.h"
#include <string.h>
#include <stdio.h>

void registrarAsistencia(Asistencia* asistencia, const char* fecha, const char* materia, const char* estado) {
    strcpy(asistencia->fecha, fecha);
    strcpy(asistencia->materia, materia);
    strcpy(asistencia->estado, estado);
}

void mostrarAsistencia(const Asistencia* asistencia) {
    printf("Fecha: %s\n", asistencia->fecha);
    printf("Materia: %s\n", asistencia->materia);
    printf("Estado: %s\n", asistencia->estado);
}