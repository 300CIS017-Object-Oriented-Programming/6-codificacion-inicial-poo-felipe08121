//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>

class Perro {

private:
    std::string nombre;
    std::string color;
    std::string raza;
    std::string tamanio;
    int edad;

public:
    Perro( std::string nombre , std::string color, int edad ,std::string tamanio, std::string raza  ); //Constructor con parametros.

    void ladrar();
    void saludar();
    void alimentar();

    std::string getNombre();
    void setNombre( std::string nombre);

    std::string getColor();
    void setColor(std:: string nuevoColor);

    std::string getRaza();
    void setRaza(std::string raza);

    std::string getTamanio();
    void setTamanio( std::string nuevoTamanio);

    int getEdad();
    void setEdad( int nuevaEdad );

};

#endif //INC_1_CLASEOBJETO_PERRO_H
