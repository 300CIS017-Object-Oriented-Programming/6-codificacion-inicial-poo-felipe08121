//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>

class Perro {

public:
    std::string nombre;
    std::string color;
    std::string raza;
    std::string tamanio;
    int edad;
    void ladrar();
    void saludar();
    void alimentar();

};

#endif //INC_1_CLASEOBJETO_PERRO_H
