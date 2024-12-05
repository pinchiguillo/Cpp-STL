//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio5.h"

#include <vector>
#include <map>
#include <set>
#include <iostream>
#include "../iologger/MultiOstream.h"

void Ejercicio5(std::istream& in, MultiOstream& out) {
    // Vector
    out << "### VECTOR ###\n";
    std::vector<int> numeros {1, 2, 3, 4, 5};
    out << "Vector inicial: ";
    for (int n : numeros) out << n << " ";
    out << "\n";

    out << "Ingresa un número para agregar al vector: ";
    int nuevoNumero;
    in >> nuevoNumero;
    numeros.push_back(nuevoNumero);

    out << "Vector actualizado: ";
    for (int n : numeros) out << n << " ";
    out << "\n\n";

    // Map
    out << "### MAP ###\n";
    std::map<std::string, int> edad;
    out << "Ingresa un nombre: ";
    std::string nombre;
    in >> nombre;
    out << "Ingresa la edad de " << nombre << ": ";
    int nuevaEdad;
    in >> nuevaEdad;
    edad[nombre] = nuevaEdad;

    out << "Contenido del mapa: \n";
    for (const auto& [key, value] : edad) {
        out << key << ": " << value << "\n";
    }

    out << "Ingresa un nombre para eliminar: ";
    in >> nombre;
    if (edad.erase(nombre)) {
        out << nombre << " eliminado del mapa.\n";
    } else {
        out << nombre << " no encontrado en el mapa.\n";
    }

    out << "Mapa actualizado:\n";
    for (const auto& [key, value] : edad) {
        out << key << ": " << value << "\n";
    }
    out << "\n";

    // Set
    out << "### SET ###\n";
    std::set<int> conjunto {1, 2, 3, 4, 5};
    out << "Set inicial: ";
    for (int n : conjunto) out << n << " ";
    out << "\n";

    out << "Ingresa un número para agregar al set: ";
    int nuevoElemento;
    in >> nuevoElemento;
    conjunto.insert(nuevoElemento);

    out << "Ingresa un número para eliminar del set: ";
    int eliminarElemento;
    in >> eliminarElemento;
    conjunto.erase(eliminarElemento);

    out << "Set actualizado: ";
    for (int n : conjunto) out << n << " ";
    out << "\n";
}