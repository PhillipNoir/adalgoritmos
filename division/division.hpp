/**
 * @file division.hpp
 * @brief Declaración de la función de división entera por restas sucesivas
 * @author Sergio Gonzalez
 * @date 2026-05-11
 */
#pragma once

/**
 * @brief Calcula el cociente y residuo de dos números mediante restas.
 * @details Este algoritmo implementa la división básica sin usar el operador '/'.
 * @param a Dividendo (número a dividir).
 * @param b Divisor (número entre el cual se divide).
 * @param q Referencia donde se almacenará el cociente resultante.
 * @param r Referencia donde se almacenará el residuo resultante.
 * @note Complejidad Temporal: O(q), donde q es el valor del cociente.
 * @note Complejidad Espacial: O(1), ya que no utiliza memoria adicional escalable.
 */
void divisionEntera(unsigned long long a, unsigned long long b, unsigned long long& q, unsigned long long& r);