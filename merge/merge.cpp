/**
 * @file merge.cpp
 * @author Sergio Gonzalez
 * @brief Este archivo contiene la implementación del algoritmo merge, usado para ordenar un vector de enteros.
 * @date 2026-25-05
 */

#include "merge.hpp"

/**
 * @brief Función que implementa el algoritmo merge para ordenar un vector de enteros, dividiendo el vector en subvectores cada vez más pequeños y luego combinándolos de forma ordenada.
 * @note El algoritmo merge es un algoritmo de ordenamiento eficiente que utiliza la técnica de divide y vencerás.
 */

void merge(std::vector<int>& vec){
    if(vec.size()<=1) return; // Si el vector tiene 0 o 1 elementos, ya está ordenado.

    std::vector<int> temp1(vec.size()/2); // Crear un vector temporal para la primera mitad del vector original.
    std::vector<int> temp2(vec.size() - temp1.size()); // Crear un vector temporal para la segunda mitad del vector original.

    // Copiar los elementos del vector original a los vectores temporales.
    for (size_t i = 0; i < vec.size()/2; i++)
    {
        temp1[i] = vec[i];
    }

    // Copiar la segunda mitad del vector original a temp2.
    for (size_t i = vec.size()/2; i < vec.size(); i++)
    {
        temp2[i - vec.size()/2] = vec[i];
    }

    // Llamar recursivamente a merge para cada mitad.
    merge(temp1);
    merge(temp2);

    size_t i = 0, j = 0, k = 0; // i para temp1, j para temp2, k para vec.
    // Combinar los elementos de temp1 y temp2 de forma ordenada en vec.
    while (i < temp1.size() && j < temp2.size()){
        if (temp1[i] <= temp2[j])
        {
            vec[k] = temp1[i];
            i++;
        }
        else
        {
            vec[k] = temp2[j];
            j++;
        }
        k++;
    }

    // Si quedan elementos en temp1, copiarlos a vec.
    while (i < temp1.size())
    {
        vec[k] = temp1[i];
        i++;
        k++;
    }

    // Si quedan elementos en temp2, copiarlos a vec.
    while (j < temp2.size())
    {
        vec[k] = temp2[j];
        j++;
        k++;
    }
    
}