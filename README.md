# Caso-Final-Integrador-Tema-3
https://github.com/EzekielNM/Caso-Final-Integrador-Tema-3.git
Trabajos prácticos
1. Carga de scripts en tiny-lisp
El módulo Labmain.cpp define la función load_script(), que se utiliza para cargar un script en la memoria y aplicarle la coloración sintáctica. Esta función se basa en la librería estándar de C.

Implementa las funciones load_script() y load_script(filename, true) en CLion, de tal manera que puedas abrir y leer archivos de texto. El primer método toma el nombre de un archivo como entrada del usuario, mientras que el segundo muestra el contenido del archivo. Ambos métodos deben cargar el script en la consola.

void load_script(const char* filename, bool show_script = false);
void load_script();
2. Asegurando la robustez del código
Asegúrate de que tu código pueda manejar diferentes tipos de errores de entrada. Esto incluye, pero no se limita a:

El usuario proporciona un nombre de archivo que no existe.
El archivo proporcionado no se puede abrir por alguna razón.
Se produce un error de lectura durante la lectura del archivo.
Para manejar estos y otros errores potenciales, es posible que desees agregar comprobaciones de errores adicionales y manejar los fallos de manera más sofisticada.



3. Corrije el ejercicio de tu compañero y sub tu valoración a tu readme

Notas
Este ejercicio no requiere el uso de funciones seguras específicas de Microsoft (las funciones con sufijo _s). En cambio, deberías usar las funciones estándar de C/C++ disponibles en todas las plataformas y compiladores, como fopen, printf y scanf.


Rúbrica
Carga de scripts (50 puntos)

Se proporciona una implementación correcta de load_script(const char* filename, bool show_script = false) que carga correctamente el archivo dado y muestra su contenido si show_script es verdadero. (25 puntos)
Se proporciona una implementación correcta de load_script() que solicita al usuario un nombre de archivo, llama a la función load_script(const char* filename, bool show_script = false) y maneja cualquier error de manera apropiada. (25 puntos)
Manejo de errores (50 puntos)

El código tiene un manejo de errores sólido y completo para el caso de que el nombre del archivo proporcionado no exista. (15 puntos)
El código tiene un manejo de errores sólido y completo para el caso de que el archivo proporcionado no se pueda abrir por alguna razón. (15 puntos)
El código tiene un manejo de errores sólido y completo para el caso de que se produzca un error de lectura durante la lectura del archivo. (20 puntos)
Total: 100 puntos
# Proyecto: Carga de Scripts en Tiny-Lisp

## Descripción
Este proyecto implementa una solución para cargar scripts en la memoria y aplicarles coloración sintáctica. Permite abrir y leer archivos de texto con un manejo robusto de errores.

## Funcionalidades
- `load_script(const char* filename, bool show_script = false)`: Carga el contenido de un archivo y muestra su contenido si el usuario lo solicita.
- `load_script()`: Solicita al usuario el nombre de un archivo y lo carga.
- Manejo de errores para:
  - Archivos inexistentes.
  - Problemas al abrir el archivo.
  - Errores de lectura.

## Instrucciones
1. Compila el programa usando CLion o un compilador de C++ compatible.
2. Ejecuta el programa y selecciona entre las opciones:
   - Proporcionar directamente el nombre del archivo.
   - Introducir el nombre manualmente.

## Valoración
El código cumple con los requisitos planteados y ofrece un manejo robusto de errores. Se ha priorizado la claridad, la modularidad y el cumplimiento de las mejores prácticas.

