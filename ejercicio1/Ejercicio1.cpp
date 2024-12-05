//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio1.h"

int Matematicas::suma(int a, int b) {
    return a + b;
}
int Matematicas::resta(int a, int b) {
    return a - b;
}

void Ejercicio1(std::istream& in, std::ostream& out) {
    int a, b;

    out << "Ingresa el primer número: ";
    in >> a; // Leer desde el flujo de entrada
    out << "Ingresa el segundo número: ";
    in >> b; // Leer desde el flujo de entrada

    out << "Suma de " << a << " + " << b << " = " << Matematicas::suma(a, b) << std::endl; // Escribir en el flujo de salida
    out << "Resta de " << a << " - " << b << " = " << Matematicas::resta(a, b) << std::endl; // Escribir en el flujo de salida
}
