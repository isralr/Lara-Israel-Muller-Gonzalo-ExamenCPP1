//
// Created by gonza on 19/11/2024.
//
#include <stdio.h>
#include <string.h>
#include "estudiante.h"

void inicializarEstudiante(Estudiante *e, const char *nombre, int edad, float promedio) {
    strncpy(e->nombre, nombre, MAX_NOMBRE);
    e->edad = edad;
    e->promedio = promedio;
    e->numMaterias = 0;
}

void agregarMateria(Estudiante *e, const char *materia) {
    if (e->numMaterias < MAX_MATERIAS) {
        strncpy(e->materias[e->numMaterias], materia, MAX_NOMBRE);
        e->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}

void eliminarMateria(Estudiante *e, const char *materia) {
    for (int i = 0; i < e->numMaterias; i++) {
        if (strcmp(e->materias[i], materia) == 0) {
            for (int j = i; j < e->numMaterias - 1; j++) {
                strncpy(e->materias[j], e->materias[j + 1], MAX_NOMBRE);
            }
            e->numMaterias--;
            return;
        }
    }
    printf("Materia no encontrada.\n");
}

void mostrarEstudiante(const Estudiante *e) {
    printf("Nombre: %s\n", e->nombre);
    printf("Edad: %d\n", e->edad);
    printf("Promedio: %.2f\n", e->promedio);
    printf("Materias:\n");
    for (int i = 0; i < e->numMaterias; i++) {
        printf("- %s\n", e->materias[i]);
    }
}