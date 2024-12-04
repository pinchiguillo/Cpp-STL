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

void Ejercicio3() {
    // Crear una instancia de Circulo con radio inicial
    Geometria::Circulo circulo1(5.0);

    // Mostrar los cálculos iniciales
    std::cout << "Círculo con radio: " << circulo1.getRadio() << std::endl;
    std::cout << "Área: " << circulo1.calcularArea() << std::endl;
    std::cout << "Perímetro: " << circulo1.calcularPerimetro() << std::endl;

    // Modificar el radio utilizando el setter
    circulo1.setRadio(10.0);
    std::cout << "\nRadio actualizado a: " << circulo1.getRadio() << std::endl;

    // Mostrar los nuevos cálculos
    std::cout << "Nueva área: " << circulo1.calcularArea() << std::endl;
    std::cout << "Nuevo perímetro: " << circulo1.calcularPerimetro() << std::endl;

    // Crear otro círculo
    Geometria::Circulo circulo2(7.0);
    std::cout << "\nOtro círculo con radio: " << circulo2.getRadio() << std::endl;
    std::cout << "Área: " << circulo2.calcularArea() << std::endl;
    std::cout << "Perímetro: " << circulo2.calcularPerimetro() << std::endl;

}
