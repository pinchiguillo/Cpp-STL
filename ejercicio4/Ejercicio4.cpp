//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio4.h"

#include <iostream>
#include "../iologger/MultiOstream.h"

namespace Ciencia {
    namespace Fisica {
        // Implementación de la función calcularEnergia
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

void Ejercicio4(std::istream& in, MultiOstream& out) {
    // Solicitar la masa al usuario
    out << "Ingresa la masa en kilogramos: ";
    double masa;
    in >> masa;

    // Calcular la energía utilizando E = mc^2
    double energia = Ciencia::Fisica::calcularEnergia(masa);

    // Mostrar el resultado
    out << "La energía para una masa de " << masa << " kg es: " << energia << " Joules.\n";
}