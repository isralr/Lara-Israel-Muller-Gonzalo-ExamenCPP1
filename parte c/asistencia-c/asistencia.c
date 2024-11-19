//
// Created by gonza on 19/11/2024.
//
#include <stdio.h>
#include <string.h>
#include "asistencia.h"

void registrarAsistencia(Asistencia *a, const char *fecha, const char *materia, const char *estado) {
    strncpy(a->fecha, fecha, MAX_FECHA);
    strncpy(a->materia, materia, MAX_NOMBRE);
    strncpy(a->estado, estado, MAX_ESTADO);
}

void mostrarAsistencia(const Asistencia *a) {
    printf("Fecha: %s\n", a->fecha);
    printf("Materia: %s\n", a->materia);
    printf("Estado: %s\n", a->estado);
}