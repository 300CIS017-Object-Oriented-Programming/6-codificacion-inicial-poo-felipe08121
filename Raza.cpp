//
// Created by felip on 1/10/2025.
//

#include "Raza.h"

std::string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setPaisOrigen( std::string nuevoPaisOrigen) {
    paisOrigen = nuevoPaisOrigen;
}

std::string Raza::getRaza() {
    return raza;
}

void Raza::setRaza(std::string nuevaRaza) {
    raza = nuevaRaza;
}

Raza::Raza( std::string paisOrigen, std::string raza){
    Raza::raza = raza;
    Raza::paisOrigen = paisOrigen;

}