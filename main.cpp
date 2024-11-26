//
// Created by Ezekiel on 26/11/2024.
//

#include <iostream>
#include "load_script.h"

int main() {
    std::cout << "=== Carga de scripts en Tiny-Lisp ===\n";
    std::cout << "1. Cargar un archivo especificando su nombre.\n";
    std::cout << "2. Introducir el nombre del archivo manualmente.\n";
    std::cout << "Seleccione una opción: ";

    int option;
    std::cin >> option;
    std::cin.ignore(); // Limpia el buffer de entrada

    switch (option) {
    case 1: {
            const char* filename = "script.tiny";
            load_script(filename, true);
            break;
    }
    case 2:
        load_script();
        break;
    default:
        std::cerr << "Opción no válida.\n";
        break;
    }

    return 0;
}

