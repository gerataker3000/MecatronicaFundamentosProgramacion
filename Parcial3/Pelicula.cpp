#include "Pelicula.h"

int main() {
    // Crear el objeto
    Pelicula pelicula;

    // Asignar sus atributos
    pelicula.titulo = "Van Helsing";
    pelicula.duracion = 131;

    // Llamar al método
    pelicula.mostrarInfo();

    return 0;
}