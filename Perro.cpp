//
// Created by lufe and Gonzo.
//

#include "Perro.h"
#include "Duenio.h"


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

    std::cout << "Al perro " << nombre << " se le esta alimentando con: " << cantidadAlimento << "Kg de comida \n";

}

Perro::Perro( std::string nombre , std::string color, int edad ,std::string tamanio) { // Implementacion del constructor
    Perro::nombre = nombre;
    Perro::color = color;
    Perro::edad = edad;
    Perro::tamanio = tamanio;
}

std::string Perro::getTamanio() {
    return tamanio;
}
void Perro::setTamanio( std::string nuevoTamanio) {
    tamanio = nuevoTamanio;
}

std::string Perro::getColor() {
    return color;
}
void Perro:: setColor( std::string nuevoColor) {
    color = nuevoColor;
}

std::string Perro::getNombre() {
    return nombre;
}
void Perro::setNombre(std::string nuevoNombre) {
    nombre = nuevoNombre;
}

int Perro::getEdad() {
    return edad;
}
void Perro::setEdad( int nuevaEdad) {
    edad = nuevaEdad;
}

 Raza* Perro::getRaza() {
    return raza;
}

void Perro::setRaza(Raza* nuevaRaza) {
    raza = nuevaRaza;
}

Veterinario* Perro::getVeterinario() {
    return veterinario;
}

void Perro::setVeterinario( Veterinario* nuevoVeterinario) {
    veterinario = nuevoVeterinario;
}


Duenio* Perro::getDuenio() {
    return duenio;
}

void Perro::setDuenio( Duenio* nuevoDuenio) {
    duenio = nuevoDuenio;
}