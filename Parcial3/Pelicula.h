//
// Created by LegoC on 21/10/2026.
//

#ifndef PARCIAL1_PELICULA_H
#define PARCIAL1_PELICULA_H
#include <iostream>
#include <string>

class Pelicula {
public:
    // Atributos: datos del objeto
    std::string titulo;
    int duracion = 0;

    // Método: muestra los datos del objeto
    void mostrarInfo() const {
        std::cout << titulo << '\n';
        std::cout << duracion << " minutos\n";
    }
};


#endif //PARCIAL1_PELICULA_H
