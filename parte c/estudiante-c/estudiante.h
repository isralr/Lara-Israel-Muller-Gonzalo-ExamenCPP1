#ifndef ESTUDIANTE_C_H
#define ESTUDIANTE_C_H

#ifdef __cplusplus

extern "C" {
#endif

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
    char materias[10][50];
    int num_materias;
} Estudiante;

void inicializarEstudiante(Estudiante* estudiante, const char* nombre, int edad, float promedio);
void agregarMateria(Estudiante* estudiante, const char* materia);
void eliminarMateria(Estudiante* estudiante, const char* materia);
void mostrarEstudiante(const Estudiante* estudiante);
#ifdef __cplusplus
}
#endif

#endif // ESTUDIANTE_C_H