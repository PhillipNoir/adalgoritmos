/**
 * @file insercion.cpp
 * @brief Implementación de la función del algoritmo de ordenamiento por inserción.
 * @author Sergio Gonzalez
 * @date 2026-05-20
 */

#include "insercion.hpp"

/**
 * @brief Función que implementa el algoritmo de ordenamiento por inserción.
 * @param arr Vector de enteros a ordenar.
 * @details El algoritmo de ordenamiento por inserción es un método de ordenamiento que construye la lista ordenada uno a uno, tomando cada elemento y colocándolo en su posición correcta dentro de la parte ya ordenada del vector.
 */

void ordenamientoPorInsercion(std::vector<int>& arr) {
    // Si el vector está vacío o solo tiene 1 elemento, no hay nada que ordenar.
    if (arr.size() <= 1) return; 

    size_t tamano = arr.size(); 
    
    for (size_t i = 1; i < tamano; i++) 
    {
        int valorActual = arr[i]; 
        
        // Ojo aquí: Si j es size_t (unsigned), no puede ser menor que 0. 
        // Si vale 0 y le restas 1, dará la vuelta (Underflow) a 18 quintillones.
        // Para solucionar esto, j se mantiene como int, o cambiamos la lógica del while.
        int j = i - 1; 
        
        while (j >= 0 && arr[j] > valorActual)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = valorActual;
    }
}