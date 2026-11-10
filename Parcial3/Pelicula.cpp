#include "Pelicula.h"

int main() {
    // Crear el objeto
    Pelicula ximenaMelani;

    // Asignar sus atributos
    ximenaMelani.titulo = "Relacion Terminada";
    ximenaMelani.duracion = 4; // meses XD

    // Llamar al método
    ximenaMelani.mostrarInfo();
    ximenaMelani.mostrarInfo(2);


    return 0;
}