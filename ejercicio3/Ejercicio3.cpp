//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio3.h"
#include <iostream>

namespace Geometria {

    // Constructor
    Circulo::Circulo(double r) : radio(r) {}

    // Método para calcular el área
    double Circulo::calcularArea() const {
        return 3.14 * radio * radio;
    }

    // Método para calcular el perímetro
    double Circulo::calcularPerimetro() const {
        return 2 * 3.14 * radio;
    }

    // Getter del radio
    double Circulo::getRadio() const {
        return radio;
    }

    // Setter del radio
    void Circulo::setRadio(double r) {
        radio = r;
    }
}

void Ejercicio3(std::istream& in, std::ostream& out) {
    // Solicitar radio inicial para el primer círculo
    out << "Ingresa el radio inicial para el primer círculo: ";
    double radioInicial1;
    in >> radioInicial1;

    // Crear una instancia de Circulo con el radio inicial ingresado
    Geometria::Circulo circulo1(radioInicial1);

    // Mostrar los cálculos iniciales
    out << "\nCírculo con radio: " << circulo1.getRadio() << "\n";
    out << "Área: " << circulo1.calcularArea() << "\n";
    out << "Perímetro: " << circulo1.calcularPerimetro() << "\n";

    // Solicitar nuevo radio para actualizar el círculo
    out << "\nIngresa un nuevo radio para actualizar el círculo: ";
    double nuevoRadio1;
    in >> nuevoRadio1;

    // Modificar el radio utilizando el setter
    circulo1.setRadio(nuevoRadio1);
    out << "Radio actualizado a: " << circulo1.getRadio() << "\n";

    // Mostrar los nuevos cálculos
    out << "Nueva área: " << circulo1.calcularArea() << "\n";
    out << "Nuevo perímetro: " << circulo1.calcularPerimetro() << "\n";

    // Solicitar radio para un segundo círculo
    out << "\nIngresa el radio para otro círculo: ";
    double radioInicial2;
    in >> radioInicial2;

    // Crear otro círculo con el radio ingresado
    Geometria::Circulo circulo2(radioInicial2);
    out << "\nOtro círculo con radio: " << circulo2.getRadio() << "\n";
    out << "Área: " << circulo2.calcularArea() << "\n";
    out << "Perímetro: " << circulo2.calcularPerimetro() << "\n";
}