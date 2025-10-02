//
// Created by felip on 1/10/2025.
//

#ifndef INC_2_CLASEOBJETOMODACCESO_RAZA_H
#define INC_2_CLASEOBJETOMODACCESO_RAZA_H

#include <string>
#include <iostream>


class Raza{

private:

    std::string raza;
    std::string paisOrigen;

public:
    Raza( std::string paisOrigen, std::string raza);

    std:: string getRaza();
    void setRaza( std::string nuevaRaza);

    std::string getPaisOrigen();
    void setPaisOrigen( std::string nuevoPaisOrigen);
};


#endif //INC_2_CLASEOBJETOMODACCESO_RAZA_H