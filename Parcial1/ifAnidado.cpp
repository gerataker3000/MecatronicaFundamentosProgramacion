// Tema Condicional if anidado
// Aquí reviso el tipo de trabajador y dentro de una de las opciones reviso la cantidad de trabajos
// Las explicaciones están en comentarios y no se ejecutan

//
// Created by LegoC on 02/09/2026.
//
// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main () {
// If anidaddo
    // Creo un objeto string vacío para guardar el tipo de trabajador
    string tipo;
    // Guardo tres trabajos en una variable entera
    int cantidadTrabajos = 3;
    // Guardo 500000 en double aunque esta variable no participa en ninguna condición ni salida del ejemplo
    double cantidadDinero = 500000;
    // Muestro el texto "Escribe Asalariado u Honorario" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Escribe Asalariado u Honorario" << endl;
    // Leo del teclado y guardo la entrada en tipo hasta encontrar un espacio o un salto de línea
    cin >> tipo;
    // Comparo el texto con Asalariado y debe coincidir también en las mayúsculas
    if (tipo == "Asalariado") {
        // Muestro el texto "Tienes un patron" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Tienes un patron" << endl;
        // Dentro del caso Asalariado reviso si hay al menos dos trabajos y con el valor tres esta condición se cumple
        if (cantidadTrabajos >= 2) {
            // Muestro el texto "Tienes obligación fiscal: declaración anual" y endl agrega un salto de línea y vacía el búfer de salida
            cout << "Tienes obligación fiscal: declaración anual" << endl;
        // Esta llave cierra el bloque que estaba abierto
        }
    // Cierro el bloque anterior y abro la alternativa que se ejecuta cuando no se cumple ninguna condición anterior de esta cadena
    }else {
        // Muestro el texto "Eres honorario" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Eres honorario" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }
// Esta llave cierra el bloque que estaba abierto
}
