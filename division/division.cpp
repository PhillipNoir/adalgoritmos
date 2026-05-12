/**
 * @file division.cpp
 * @brief Implementación de la función de división entera por restas sucesivas
 * @author Sergio Gonzalez
 * @date 2026-05-11
 */

#include "division.hpp"

void divisionEntera(unsigned long long a, unsigned long long b, unsigned long long& q, unsigned long long& r) {
    // Caso base: si el divisor es 0, el comportamiento es indefinido.
    // En este nivel evitamos el crash devolviendo 0.
    if (b == 0) return;

    q = 0; // Inicializamos el contador de restas
    r = a; // El residuo inicial es el dividendo completo

    // Algoritmo de restas sucesivas
    while (r >= b) {
        r -= b; // Restamos el divisor al residuo actual
        q++;    // Incrementamos el cociente por cada resta exitosa
    }
}