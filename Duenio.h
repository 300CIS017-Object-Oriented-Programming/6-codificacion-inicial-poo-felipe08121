//
// Created by felip on 1/10/2025.
//

#ifndef INC_2_CLASEOBJETOMODACCESO_DUENIO_H
#define INC_2_CLASEOBJETOMODACCESO_DUENIO_H
#include <iostream>
#include <string>
//#include "Perro.h"

class Perro;


class Duenio {
private:
    std:: string nombre;
    int edad;
    Perro * perro;
public:
    Duenio(std::string nombre, int edad, Perro * perro);

    std::string getNombre();
    void setNombre(std::string nuevoNombre);

    int getEdad();
    void setEdad(int nuevaEdad);

    Perro * getPerro();
    void setPerro(Perro * perro);

};


#endif //INC_2_CLASEOBJETOMODACCESO_DUENIO_H