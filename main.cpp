#include <iostream>
#include "Perro.h"
#include "Raza.h"
#include "Veterinario.h"
#include "Duenio.h"

int main() {

    std::cout << "Hello, World!" << std::endl;

    // Instanciar
    Perro firulais ("Firulais", "Negro", 5, "Grande");

    std::cout << "Que ladre" << std::endl;
    //firulais.ladrar();
    //firulais.saludar("miercoles");
    firulais.alimentar();

    Raza mastinNapolitano ("Italia" ,"Mastin Napolitano");
    Raza maltes( "Italia","Maltes");

    firulais.setRaza(&mastinNapolitano);
    std::cout << "La Raza de " << firulais.getNombre() << " es: " << firulais.getRaza()->getRaza() <<
    ", Cuyo pais de origen es: "<< firulais.getRaza()->getPaisOrigen() << "\n";
    // al metodo get Raza del objeto "firulais" (de tipo Perro) tengo que apuntar al metodo get (en este
    // caso getRaza) para obtener la informacion del tipo (atributo de la clase Raza) raza.

    Veterinario carlos ("Carlos Giraldo", 30);
    firulais.setVeterinario(&carlos);
    std::cout << "El veterinario de: " << firulais.getNombre() << " es: "
        << firulais.getVeterinario()->getNombre() <<", que tiene: " << firulais.getVeterinario()->getAniosExperiencia()
    << " anios de Experiencia\n";

    Duenio juan( "Juan Felipe Perafan", 25, &firulais);

    std::cout << "Informacion del cliente: \n" <<"Nombre: " << juan.getNombre() << "\nEdad: " << juan.getEdad() <<
        "\nPerro: " << juan.getPerro()->getNombre()<< "\nVeterinario: " << juan.getPerro()->getVeterinario()
    ->getNombre() << "\n";



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
