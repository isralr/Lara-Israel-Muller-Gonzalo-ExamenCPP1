#include "config.h"

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#define MAX_NOMBRE 100
#define MAX_MATERIAS 10

typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][MAX_NOMBRE];
    int numMaterias;
} Estudiante;

#ifdef __cplusplus
extern "C" {
#endif

    void inicializarEstudiante(Estudiante *e, const char *nombre, int edad, float promedio);
    void agregarMateria(Estudiante *e, const char *materia);
    void eliminarMateria(Estudiante *e, const char *materia);
    void mostrarEstudiante(const Estudiante *e);

#ifdef __cplusplus
}
#endif

#endif