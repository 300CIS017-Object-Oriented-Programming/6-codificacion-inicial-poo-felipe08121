//
// Created by felip on 1/10/2025.
//

#ifndef INC_2_CLASEOBJETOMODACCESO_VETERINARIO_H
#define INC_2_CLASEOBJETOMODACCESO_VETERINARIO_H
#include <string>
#include <iostream>



class Veterinario{
private:
    std:: string nombre;
    int aniosExperiencia;

public:
    Veterinario( std::string nombre, int aniosExperiencia );// Creacion del constructor

    std::string getNombre();
    void setNombre( std::string nuevoNombre);

    int getAniosExperiencia();
    void setAniosExperiencia( int nuevoAnio);

};



#endif //INC_2_CLASEOBJETOMODACCESO_VETERINARIO_H