//
// Created by gonza on 19/11/2024.
//
#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include "config.h"

#define MAX_FECHA 20
#define MAX_ESTADO 15

typedef struct {
    char fecha[MAX_FECHA];
    char materia[MAX_NOMBRE];
    char estado[MAX_ESTADO]; // Ejemplo: "Asistió", "Falta", "Tardanza"
} Asistencia;

#ifdef __cplusplus
extern "C" {
#endif

    void registrarAsistencia(Asistencia *a, const char *fecha, const char *materia, const char *estado);
    void mostrarAsistencia(const Asistencia *a);

#ifdef __cplusplus
}
#endif

#endif
