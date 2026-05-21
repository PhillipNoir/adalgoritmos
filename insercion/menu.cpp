/**
 * @file menu.cpp
 * @brief Implementación de la función para mostrar el menú de opciones al usuario.
 * @author Sergio Gonzalez
 * @date 2026-05-21
 */
#include "menu.hpp"
#include "insercion.hpp"
#include <iostream>
#include <vector>

void mostrarMenu(){
    size_t numeroElementos{0};
    int elemento{0};;
    std::cout << "Bienvenido al programa de ordenamiento por inserción!" << std::endl;
    std::cout << "Ingrese el numero de elementos a ordenar: " << std::endl;
    std::cin >> numeroElementos;
    std::vector<int> arr(numeroElementos);
    for (size_t i = 0; i < numeroElementos; i++)
    {
        std::cout << "Ingrese el elemento " << i + 1 << ": " << std::endl;
        std::cin >> elemento;
        arr[i] = elemento;
    }
    std::cout << "Elementos antes de ordenar: " << std::endl;
    for (const auto& elem : arr)    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    ordenamientoPorInsercion(arr);
    std::cout << "Elementos después de ordenar: " << std::endl;
    for (const auto& elem : arr)    {
        std::cout << elem << " ";
    }
}