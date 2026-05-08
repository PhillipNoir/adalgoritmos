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
using namespace std;

void menu(){
    unsigned long long n;
    cout << "Ingrese un número entero: ";
    cin >> n;
    cout << "La suma de los primeros " << n << " enteros positivos es: " << suma(n) << endl;
}