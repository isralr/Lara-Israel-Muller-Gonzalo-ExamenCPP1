# Lara-Israel-Müller-Gonzalo-ExamenCPP1 - Israel Lara y Gonzalo Müller


### Link al repositorio: (https://github.com/isralr/Lara-Israel-Muller-Gonzalo-ExamenCPP1.git)

---

<br/>

<details>
<summary> <b>Parte 1: Preguntas de elección múltiple</b> </summary>
   
<br/>
   
*¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?*

a) C utiliza cout y cin mientras que C++ utiliza printf y scanf.

b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

c) No hay ninguna diferencia.

d) C++ utiliza printf y scanf mientras que C utiliza std::cout y std::cin.


### La respuesta correcta es: b

En C, las funciones printf y scanf se usan para entrada/salida, mientras que C++ introduce std::cout y std::cin, que forman parte de su biblioteca estándar y utilizan operadores como << y >>.

---
*¿Qué es un espacio de nombres en C++?*

a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

b) Una manera de definir variables.

c) Una función de la biblioteca estándar.

d) Un tipo de ciclo en C++.


### La respuesta correcta es: a

Los espacios de nombres (namespaces) permiten evitar conflictos de nombres al organizar funciones, clases u otras entidades bajo un identificador común, como std para la biblioteca estándar.

---
*En programación orientada a objetos en C++, ¿qué es una clase?*

a) Una agrupación de funciones.

b) Un tipo de variable.

c) Un tipo de dato primitivo.

d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).


### La respuesta correcta es: d

Una clase define la estructura y comportamiento de un objeto, encapsulando datos (atributos) y métodos (funciones miembro).

---
*¿Qué son los templates en C++?*

a) Un tipo especial de clase.

b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

c) Una forma de definir variables.

d) Una característica específica de C.


### La respuesta correcta es: b

Los templates son una característica de C++ que permite definir funciones y clases genéricas que funcionan con diferentes tipos de datos sin necesidad de especificar el tipo exacto en el momento de la definición.

</details>







<br/>
<br/>


<details>
   <summary><b>Parte 2: Práctica</b></summary>
<br>
   
<details>
   <summary><b>Parte2: Enunciado y Rúbrica</b></summary>

   <br>
   
En el marco de la globalización y la creciente tendencia de intercambio académico, las universidades internacionales están experimentando un auge en la diversidad de su población estudiantil. Estos estudiantes provienen de diferentes partes del mundo, con culturas, idiomas y antecedentes educativos distintos. Con tal diversidad, la administración académica enfrenta el desafío de gestionar de manera eficiente y personalizada la información de cada estudiante.

El "Centro Global de Estudios Avanzados" (CGEA) es una de esas universidades internacionales que ha decidido abordar este desafío. Con campus en cinco continentes y una comunidad estudiantil de más de 40,000 alumnos, el CGEA ha identificado la necesidad de modernizar su sistema de gestión académica para ofrecer un mejor servicio a sus estudiantes y, al mismo tiempo, optimizar sus procesos internos.

Para ello, han contratado a una firma de desarrollo de software especializada en soluciones educativas. La primera fase del proyecto consiste en evaluar y decidir qué lenguaje de programación es el más adecuado para implementar el nuevo sistema. Dado que el equipo de desarrollo tiene experiencia tanto en C como en C++, han decidido realizar una comparativa entre ambos lenguajes utilizando una estructura básica: la información del estudiante.

<br>

Instrucciones para la Pregunta de Desarrollo de Código:

### Rúbrica

**1. Implementación de la estructura `Estudiante` (30%)**
- La estructura `Estudiante` está correctamente implementada tanto en **C** como en **C++**.

**2. Implementación de la función `mostrarEstudiante()` (20%)**
- La función `mostrarEstudiante()` está correctamente implementada y muestra correctamente todos los campos de una instancia de `Estudiante`.

**3. Comparación entre las dos implementaciones (30%)**
- Se proporciona una comparación clara y correcta entre las implementaciones de **C** y **C++**.

**4. Calidad del código (20%)**
- Todo el código está bien comentado, organizado y sigue buenas prácticas de programación.
- El código se compila sin errores ni advertencias en **CLion**.



### Importante
- Todos los códigos deben ser originales. Se utilizarán herramientas de detección de plagio para verificar la originalidad.
- El código debe estar bien documentado y organizado.
- Se debe incluir un archivo `README` con instrucciones sobre cómo compilar y ejecutar el programa.
- El código debe compilarse sin errores ni advertencias en **CLion**.

</details>










<details> <summary><b>Parte 2: Desarrollo de código</b></summary>
   
## Estructura del `Estudiante`

### En C++:
1. Implementa una estructura llamada `Estudiante` con los campos:
   - `nombre`
   - `edad`
   - `promedio`
2. Desarrolla la función `mostrarEstudiante()` para mostrar todos los campos de la estructura.

### En C:
1. Realiza una implementación equivalente en el lenguaje **C**.

---

## Comparativa
- Discute las diferencias clave entre las implementaciones de **C** y **C++**.

---

## Gestión de Materias

### En C++:
1. Añade a la estructura `Estudiante` una **lista** o **vector** de materias en las que está inscrito.
2. Implementa funciones para:
   - Agregar materias.
   - Eliminar materias.
   - Mostrar materias.

### En C:
1. Realiza una implementación equivalente en el lenguaje **C**.

---

## Registro de Asistencia

Es vital para la universidad llevar un control de la asistencia de sus estudiantes.

### En C++:
1. Diseña una clase o estructura `Asistencia` que contenga:
   - `fecha`
   - `materia`
   - `estado` (asistió, falta, tardanza)
2. Integra esta estructura con `Estudiante`.
3. Desarrolla funciones para:
   - Registrar asistencia.
   - Mostrar la asistencia.

### En C:
1. Realiza una implementación equivalente en el lenguaje **C**.

---

## Manejo de Excepciones

El sistema debe ser capaz de manejar situaciones inesperadas, como errores en el formato de la fecha o materias no registradas.

### En C++:
1. Implementa **excepciones personalizadas** para manejar estos escenarios.
2. Demuestra su uso con bloques `try` y `catch`.

### En C:
1. Aunque **C** no tiene un sistema integrado de manejo de excepciones como **C++**, discute cómo podrías manejar errores y situaciones inesperadas en este lenguaje.
</details>
</details>

<details>
 <summary> Parte 3: Conclusión </summary>
  <p style="font-size: 12px; line-height: 1.4;">
¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?
     
- Considero que el lenguaje mas adecuado es C++ ya que puede manejar requisitos u operaciones complejas. 
¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?

- Le recomendaría mantener el orden separado de c y c++ y que definan el proyecto de manera que no se vuelva complicado de entender manteniendo la sencillez en todo lo posible e intentar mantenerlo lo mas ordenado posible para que sea facil de entendre, recordarle que el proyecto de c y sus archvios pueden ser ejecutados por c++


