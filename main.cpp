//
// Created by pinchiguillo on 04/12/2024.
//

#include <iostream>

#include "ejercicio1/Ejercicio1.h"
#include "ejercicio2/Ejercicio2.h"
#include "ejercicio3/Ejercicio3.h"

int main() {

    int opt = 0;

    std::cout << "Elija el ejercicio a ejecutar: ";
    std::cin >> opt;

    switch (opt) {
        case 1: Ejercicio1(); break;
        case 2: Ejercicio2(); break;
        case 3: Ejercicio3(); break;
    }

    return 0;
}