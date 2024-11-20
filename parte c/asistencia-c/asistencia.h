//
// Created by gonza on 19/11/2024.
//
#ifndef ASISTENCIA_C_H
#define ASISTENCIA_C_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char fecha[11];
    char materia[50];
    char estado[10];
} Asistencia;

void registrarAsistencia(Asistencia* asistencia, const char* fecha, const char* materia, const char* estado);
void mostrarAsistencia(const Asistencia* asistencia);
#ifdef __cplusplus
}
#endif
#endif // ASISTENCIA_C_H