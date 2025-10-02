//
// Created by felip on 1/10/2025.
//

#include "Duenio.h"

Duenio::Duenio(std::string nombre, int edad, Perro * perro) {
    Duenio::nombre = nombre;
    Duenio::edad= edad;
    Duenio::perro = perro;
}

std:: string Duenio::getNombre() {
    return nombre;
}
void Duenio::setNombre( std::string nuevoNombre) {
    nombre = nuevoNombre;
}

int Duenio::getEdad() {
    return edad;
}
void Duenio::setEdad (int nuevaEdad) {
    edad = nuevaEdad;
}

Perro * Duenio::getPerro() {
    return perro;
}

void Duenio::setPerro( Perro * nuevoPerro) {
    perro = nuevoPerro;
}