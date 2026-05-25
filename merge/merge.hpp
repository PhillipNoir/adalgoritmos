/**
 * @file merge.hpp
 * @author Sergio Gonzalez
 * @brief Este archivo contiene la declaración del algoritmo merge, usado para ordenar un vector de enteros.
 * @date 2026-25-05
 */

 #pragma once

#include <vector>

/**
 * @brief Función que implementa el algoritmo merge para ordenar un vector de enteros, dividiendo el vector en subvectores cada vez más pequeños y luego combinándolos de forma ordenada.
 * @note El algoritmo merge es un algoritmo de ordenamiento eficiente que utiliza la técnica de divide y vencerás.
 */
void merge(std::vector<int>& vec);