//
// Created by felip on 1/10/2025.
//

#include "Veterinario.h"


Veterinario::Veterinario( std::string nombre, int aniosExperiencia) {
    Veterinario::nombre = nombre;
    Veterinario::aniosExperiencia = aniosExperiencia;
}


std::string Veterinario:: getNombre() {
    return nombre;
}

void Veterinario::setNombre(std::string nuevoNombre) {
    nombre = nuevoNombre;
}

int Veterinario:: getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia( int nuevoAniosExperiencia) {
    aniosExperiencia = nuevoAniosExperiencia;
}