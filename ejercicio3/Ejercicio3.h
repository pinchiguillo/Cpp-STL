//
// Created by pinchiguillo on 04/12/2024.
//

#ifndef EJERCICIO3_H
#define EJERCICIO3_H


#include <iostream>
#include "../iologger/MultiOstream.h"

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        // Constructor
        explicit Circulo(double r);

        // Métodos para calcular área y perímetro
        double calcularArea() const;
        double calcularPerimetro() const;

        // Getter y Setter (opcional para manipular el radio)
        double getRadio() const;
        void setRadio(double r);
    };
}

void Ejercicio3(std::istream& in, MultiOstream& out);


#endif //EJERCICIO3_H
