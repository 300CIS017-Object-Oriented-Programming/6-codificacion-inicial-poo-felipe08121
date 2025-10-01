//
// Created by lufe and Gonzo.
//

#include "Perro.h"

void Perro::ladrar() {

    std::cout << " Esta ladrando " << nombre << " tengo " << edad << " anios " << std::endl;
}

void Perro::saludar() {
    int veces = 5; // veces es una variable local
    for (int i = 0; i < veces; i++) {
       // Esta linea combina variables locales con atributos de instancia
        std::cout << nombre << " saluda." << std::endl;
    }
}

void Perro::alimentar() {

    float cantidadAlimento;

    if (tamanio == "Grande") {
        cantidadAlimento = 1 * edad;
    }
    else if (tamanio== "Mediano") {
        cantidadAlimento = 0.5 * edad;
    }
    else {
        cantidadAlimento = 0.25 * edad;
    }

    std::cout << "Al perro " << nombre << " se esta alimentando con: " << cantidadAlimento << "Kg de comida \n";

}
