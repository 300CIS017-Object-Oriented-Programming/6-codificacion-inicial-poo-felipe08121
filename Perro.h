//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>
#include "Raza.h"
#include "Veterinario.h"

class Perro {

private:
    std::string nombre;
    std::string color;
    std::string tamanio;
    Raza * raza; // Tengo que pasar la otra clase como un puntero (como referencia)
    Veterinario * veterinario;
    int edad;

public:
    Perro( std::string nombre , std::string color,
        int edad ,std::string tamanio); //Constructor con parametros.

    void ladrar();
    void saludar();
    void alimentar();

    std::string getNombre();
    void setNombre( std::string nombre);

    std::string getColor();
    void setColor(std:: string nuevoColor);

    std::string getTamanio();
    void setTamanio( std::string nuevoTamanio);

    int getEdad();
    void setEdad( int nuevaEdad );

    Raza* getRaza();
    void setRaza( Raza* nuevaRaza);

    Veterinario* getVeterinario();
    void setVeterinario( Veterinario* nuevoVeterinario);
};

#endif //INC_1_CLASEOBJETO_PERRO_H
