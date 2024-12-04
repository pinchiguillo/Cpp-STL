//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio2.h"

#include <iostream>

double Geometria::calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

void Ejercicio2() {

    double base = 0;
    double altura = 0;

    std::cout << "Introduce la base del triangulo: ";
    std::cin >> base;

    std::cout << "Introduce la altura del triangulo: ";
    std::cin >> altura;

    std::cout << "El area del triangulo es: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

}