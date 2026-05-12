/**
 * @file menu.cpp
 * @brief Implementación de la función menu
 * @details Esta función muestra un menú al usuario para que pueda ingresar un número entero y calcular la suma de los primeros n enteros positivos utilizando la función suma.
 * @author Sergio Gonzalez
 * @date 2026-05-07
 */

#include "menu.hpp"
#include "suma.hpp"
#include <iostream>

void menu(){
    unsigned long long n;
    std::cout << "Ingrese un número entero: ";
    std::cin >> n;
    std::cout << "La suma de los primeros " << n << " enteros positivos es: " << suma(n) << std::endl;
}