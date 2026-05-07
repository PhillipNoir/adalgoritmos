/**
 * @file suma.cpp
 * @brief Implementación de la función suma
 * @details Esta función recibe un numero entero n y devuelve la suma de los primeros n enteros positivos.
 * @author Sergio Gonzalez
 * @date 2026-05-07
 */

#include "suma.hpp"

int suma(int n){
    if (n <= 0)
    {
        return 0; // Si n es 0 o negativo, la suma es 0
    }

    unsigned long long sum{0};

    for (int i = 0; i <= n; i++)
    {
        sum+=i; // Suma el valor de i a sum
    }

    return sum; // Devuelve la suma total
}