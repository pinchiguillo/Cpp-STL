//
// Created by pinchiguillo on 04/12/2024.
//

#include <iostream>
#include <locale>
#include <fstream>

#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Ejercicio2.h"
#include "ejercicio3/Ejercicio3.h"
#include "ejercicio4/Ejercicio4.h"
#include "ejercicio5/Ejercicio5.h"

#include "iologger/MultiOstream.h"


int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Crear el archivo de registro
    std::ofstream logFile("C:/Users/pinchiguillo/Documents/GitHub/Cpp-STL/log.txt", std::ios::app);
    if (!logFile) {
        std::cerr << "Error al abrir el archivo log.txt" << std::endl;
        return 1;
    }

    // Crear el multiplexador de salida
    MultiOstream output;
    output.addStream(std::cout); // Salida a la consola
    output.setLogStream(logFile); // Salida al archivo con salto de línea automático

    // Pedir opción al usuario
    int opt = 0;
    output << "Elija el ejercicio a ejecutar: ";
    std::cin >> opt;

    // Ejecutar el ejercicio correspondiente
    switch (opt) {
        case 1: Ejercicio1(std::cin, output); break;
        case 2: Ejercicio2(std::cin, output); break;
        case 3: Ejercicio3(std::cin, output); break;
        case 4: Ejercicio4(std::cin, output); break;
        case 5: Ejercicio5(std::cin, output); break;

        default:
            output << "Ejercicio no encontrado" << std::endl;
    }

    logFile.close();
    return 0;
}