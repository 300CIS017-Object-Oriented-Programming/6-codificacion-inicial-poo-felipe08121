#include <iostream>
#include "Perro.h"

int main() {

    std::cout << "Hello, World!" << std::endl;

    // Instanciar
    Perro firulais ("Firulais", "Negro", 5, "Grande", "Mastin napolitano");

    std::cout << "Que ladre" << std::endl;
    //firulais.ladrar();
    //firulais.saludar("miercoles");
    firulais.alimentar();

/*
    Perro luna;
    luna.nombre = "Luna";
    luna.color = "Blanco";
    luna.edad = 2;
    luna.tamanio = "Pequeno";

    std::cout << "Que ladre" << std::endl;
    //luna.ladrar();
*/
    return 0;
}
