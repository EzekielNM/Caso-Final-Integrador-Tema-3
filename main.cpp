//
// Created by Ezekiel on 26/11/2024.
//
#include "script_loader.h"
#include <iostream>

int main() {
    try {
        int option;
        std::cout << "Seleccione una opción:\n";
        std::cout << "1. Cargar script con nombre proporcionado\n";
        std::cout << "2. Solicitar nombre del archivo\n";
        std::cout << "Opción: ";
        std::cin >> option;

        switch (option) {
        case 1: {
                char filename[500];
                std::cout << "Ingrese el nombre del archivo: ";
                std::cin >> filename;
                load_script(filename, true);
                break;
        }
        case 2:
            load_script();
            break;
        default:
            std::cerr << "Opción inválida.\n";
        }
    } catch (const std::exception &e) {
        std::cerr << "Error inesperado: " << e.what() << std::endl;
    }

    return 0;
}

