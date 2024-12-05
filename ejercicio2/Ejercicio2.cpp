//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio2.h"

#include <iostream>

#include "Circulo.h"
#include "Triangulo.h"

void Ejercicio2(std::istream& in, std::ostream& out) {
    double base, altura, radio;

    // Pedir al usuario los datos para el triángulo
    out << "Ingresa la base del triángulo: ";
    in >> base;
    out << "Ingresa la altura del triángulo: ";
    in >> altura;

    // Calcular y mostrar el área del triángulo
    out << "El área del triángulo con base " << base << " y altura " << altura
        << " es: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

    // Pedir al usuario el radio del círculo
    out << "Ingresa el radio del círculo: ";
    in >> radio;

    // Calcular y mostrar el área del círculo
    out << "El área del círculo con radio " << radio
        << " es: " << Geometria::calcularAreaCirculo(radio) << std::endl;
}