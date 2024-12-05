//
// Created by pinchiguillo on 04/12/2024.
//

#include <iostream>
#include <locale>

#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Ejercicio2.h"
#include "ejercicio3/Ejercicio3.h"
#include "ejercicio4/Ejercicio4.h"
#include "ejercicio5/Ejercicio5.h"

int main() {

    setlocale(LC_ALL, "es_ES.UTF-8");

    int opt = 0;

    std::cout << "Elija el ejercicio a ejecutar: ";
    std::cin >> opt;

    switch (opt) {
        case 1: Ejercicio1(std::cin, std::cout); break;
        case 2: Ejercicio2(std::cin, std::cout); break;
        case 3: Ejercicio3(std::cin, std::cout); break;
        case 4: Ejercicio4(); break;
        case 5: Ejercicio5(); break;

        default:
            std::cout << "Ejercicio no encontrado" << std::endl;
    }

    return 0;
}