/**
 * @file menu.cpp
 * @author Sergio Gonzalez
 * @brief Este archivo contiene la implementación del menú para ingresar el número de elementos a ordenar y los elementos del vector, así como llamar a la función merge.
 * @date 2026-25-05
 */
#include "menu.hpp"
#include "merge.hpp"

void menu() {
    int n;
    std::cout << "Ingrese el número de elementos a ordenar: ";
    std::cin >> n;

    std::vector<int> vec(n);
    std::cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    merge(vec);

    std::cout << "Vector ordenado:\n";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}