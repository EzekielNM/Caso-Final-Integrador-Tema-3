//
// Created by Ezekiel on 26/11/2024.
//

#include "load_script.h"
#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script) {
    std::ifstream file(filename);

    // Verifica si el archivo se puede abrir
    if (!file.is_open()) {
        std::cerr << "Error: No se pudo abrir el archivo '" << filename << "'.\n";
        return;
    }

    std::string line;
    std::string script_content;

    // Lee el archivo línea por línea
    while (std::getline(file, line)) {
        script_content += line + '\n';
    }

    // Verifica si hubo un error de lectura
    if (file.bad()) {
        std::cerr << "Error: Se produjo un error de lectura en el archivo '" << filename << "'.\n";
        file.close();
        return;
    }

    file.close();

    // Si show_script es verdadero, muestra el contenido del script
    if (show_script) {
        std::cout << "Contenido del archivo '" << filename << "':\n";
        std::cout << script_content;
    }
}

void load_script() {
    std::string filename;

    std::cout << "Ingrese el nombre del archivo a cargar: ";
    std::getline(std::cin, filename);

    if (filename.empty()) {
        std::cerr << "Error: No se proporcionó un nombre de archivo.\n";
        return;
    }

    load_script(filename.c_str(), true);
}

