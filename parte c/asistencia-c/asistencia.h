#ifndef ASISTENCIA_C_H
#define ASISTENCIA_C_H

#ifdef __cplusplus
extern "C" {
#endif

    // Definición de la estructura Asistencia
    typedef struct {
        char fecha[11];  // Formato YYYY-MM-DD
        char materia[50];
        char estado[10];
    } Asistencia;

    /**
     * Valida si la fecha tiene el formato correcto (YYYY-MM-DD) y sus valores son válidos.
     * @param fecha Cadena con la fecha a validar.
     * @return 1 si es válida, 0 si no lo es.
     */
    int esFechaValida(const char* fecha);

    /**
     * Registra una asistencia en la estructura proporcionada.
     * @param asistencia Puntero a la estructura Asistencia.
     * @param fecha Cadena con la fecha de la asistencia (formato YYYY-MM-DD).
     * @param materia Cadena con el nombre de la materia.
     * @param estado Cadena con el estado ("Asistio", "Falto", etc.).
     * @return 0 si se registró correctamente, -1 si el formato de la fecha es inválido, -2 si la materia no está registrada.
     */
    int registrarAsistencia(Asistencia* asistencia, const char* fecha, const char* materia, const char* estado);

    /**
     * Muestra los datos de una asistencia.
     * @param asistencia Puntero a la estructura Asistencia que se mostrará.
     */
    void mostrarAsistencia(const Asistencia* asistencia);

#ifdef __cplusplus
}
#endif

#endif // ASISTENCIA_C_H
