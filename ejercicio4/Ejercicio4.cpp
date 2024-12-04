//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio4.h"

#include <iostream>

namespace Ciencia {
    namespace Fisica {
        // Implementación de la función calcularEnergia
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

void Ejercicio4() {
    double masa = 10.0;

    double energia = Ciencia::Fisica::calcularEnergia(masa);

    std::cout << "La energía para una masa de " << masa << " kg es: " << energia << " Joules." << std::endl;
}