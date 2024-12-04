//
// Created by pinchiguillo on 04/12/2024.
//

#include "Ejercicio5.h"

#include <vector>
#include <map>
#include <set>
#include <iostream>

void Ejercicio5() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

}