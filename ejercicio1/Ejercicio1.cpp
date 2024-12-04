//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio1.h"

#include <iostream>

int Matematicas::suma(int a, int b) {
    return a + b;
}
int Matematicas::resta(int a, int b) {
    return a - b;
}

void Ejercicio1() {

    std::cout << "Suma de 2 + 3 = " << Matematicas::suma(2, 3) << std::endl;

    std::cout << "Resta de 2 - 3 = " << Matematicas::resta(2, 3) << std::endl;

}
