/**
 * @file menu.cpp
 * @brief Implementación del menú de usuario para el módulo de división
 * @author Sergio Gonzalez
 * @date 2026-05-11
 */
#include "menu.hpp"
#include "division.hpp"
#include <iostream>

using namespace std;

void mostrarMenuDivision() {
    unsigned long long a, b, q, r;

    cout << "--- Analisis de Algoritmos: Division Entera ---" << endl;
    cout << "Ingrese el dividendo (a): ";
    cin >> a;
    cout << "Ingrese el divisor (b): ";
    cin >> b;

    if (b == 0) {
        cout << "Error critico: No se puede dividir entre cero." << endl;
        return;
    }

    divisionEntera(a, b, q, r);

    cout << "\n[RESULTADOS]" << endl;
    cout << "Cociente (q): " << q << endl;
    cout << "Residuo (r): " << r << endl;
    cout << "\nComprobacion: " << a << " = (" << b << " * " << q << ") + " << r << endl;
}