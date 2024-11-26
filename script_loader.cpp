//
// Created by Ezekiel on 26/11/2024.
//

#include "script_loader.h"
#include <iostream>
#include <string>
#include <cstdio>
#include <stdexcept>

void load_script(const char* filename, bool show_script) {
    FILE* file = nullptr;

    try {
        // Abrir archivo
        file = fopen(filename, "rb");
        if (!file) {
            throw std::runtime_error("No se pudo abrir el archivo: " + std::string(filename));
        }

        // Leer archivo
        std::string script; // Declarar script dentro del ámbito necesario
        char buffer[4001];
        size_t bytesRead;
        while ((bytesRead = fread(buffer, 1, 4000, file)) > 0) {
            buffer[bytesRead] = '\0';
            script += buffer;
        }

        // Verificar errores de lectura
        if (ferror(file)) {
            throw std::runtime_error("Error al leer el archivo.");
        }

        fclose(file);
        file = nullptr;

        // Mostrar script si se solicita
        if (show_script) {
            std::cout << "\033[34m\033[47m" << script << "\033[0m" << std::endl;
        }

    } catch (const std::exception &e) {
        if (file) fclose(file); // Cerrar el archivo si está abierto
        std::cerr << "Error en load_script: " << e.what() << std::endl;
        throw; // Re-lanzar la excepción
    }
}

void load_script() {
    char filename[500];
    std::cout << "Ingrese el nombre del archivo: ";
    std::cin >> filename;

    try {
        load_script(filename, true); // Reutilizar la función anterior
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

