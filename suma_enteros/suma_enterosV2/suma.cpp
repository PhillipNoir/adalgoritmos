/**
 * @file suma.cpp
 * @brief Implementación de la función suma
 * @details Esta función recibe un numero entero n y devuelve la suma de los primeros n enteros positivos mediante la fórmula n*(n+1)/2. Esta versión es más eficiente que la versión anterior, ya que no utiliza un bucle para calcular la suma, sino que aprovecha una fórmula matemática conocida.
 * @author Sergio Gonzalez
 * @date 2026-05-07 
 */

#include "suma.hpp"
unsigned long long suma(unsigned long long n){
    if (n<=0)
    {
        return 0; // Si n es 0 o negativo, la suma es 0
    }
    return n*(n+1)/2; // Devuelve la suma utilizando la fórmula
}