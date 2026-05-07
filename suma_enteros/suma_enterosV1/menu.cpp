/**
 * @file menu.cpp
 * @brief Implementación del menú de input para la función suma
 * @details Este programa solicita al usuario un número entero y muestra la suma de los primeros n enteros positivos utilizando la función suma definida en suma.hpp.
 * @author Sergio Gonzalez
 * @date 2026-05-07
 */

#include <iostream>
#include "suma.hpp"
#include "menu.hpp"

void mostrarMenu(){

    int n{0};

    std::cout<<"Ingrese el numero entero n para calcular la suma de los primeros n enteros positivos: ";
    std::cin>>n;
    std::cout<<"La suma de los primeros "<<n<<" enteros positivos es: "<<suma(n)<<std::endl;
}