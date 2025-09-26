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
