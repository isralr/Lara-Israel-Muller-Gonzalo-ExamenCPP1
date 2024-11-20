//
// Created by gonza on 19/11/2024.
//
#include "estudiante.h"
#include <string.h>
#include <stdio.h>

void inicializarEstudiante(Estudiante* estudiante, const char* nombre, int edad, float promedio) {
    strcpy(estudiante->nombre, nombre);
    estudiante->edad = edad;
    estudiante->promedio = promedio;
    estudiante->num_materias = 0;
}

void agregarMateria(Estudiante* estudiante, const char* materia) {
    if (estudiante->num_materias < 10) {
        strcpy(estudiante->materias[estudiante->num_materias], materia);
        estudiante->num_materias++;
    }
}

void eliminarMateria(Estudiante* estudiante, const char* materia) {
    for (int i = 0; i < estudiante->num_materias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            for (int j = i; j < estudiante->num_materias - 1; j++) {
                strcpy(estudiante->materias[j], estudiante->materias[j + 1]);
            }
            estudiante->num_materias--;
            break;
        }
    }
}

void mostrarEstudiante(const Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
    printf("Materias:\n");
    for (int i = 0; i < estudiante->num_materias; i++) {
        printf("  %s\n", estudiante->materias[i]);
    }
}