// Tema Cadena de condiciones else if
// Aquí reviso varias opciones en orden y ejecuto solamente la primera que se cumple
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
   // Saber si te quiere :(
    // Creo un objeto string que ya contiene Te amo así que la elección está fijada desde el código
    string opcion2 = "Te amo";
    // Reviso la primera opción y con el valor actual entro aquí y omito las demás alternativas
    if (opcion2 == "Te amo") {
        // Muestro el texto "Te ama" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Te ama" << endl;
    // Cierro el caso anterior y solo si no se cumplió comparo el texto con Te quiere
    } else if (opcion2 == "Te quiere") {
        // Muestro el texto "Te quiere" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Te quiere" << endl;
    // Solo si fallaron las comparaciones anteriores reviso si el texto es Le gustas
    }else if (opcion2 == "Le gustas") {
        // Muestro el texto "Le gustas" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Le gustas" << endl;
    // Cierro el bloque anterior y abro la alternativa que se ejecuta cuando no se cumple ninguna condición anterior de esta cadena
    }else {
        // Muestro el texto "Animo lincito" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Animo lincito" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }


    // Aquí termino main devolviendo cero para indicar una salida normal y las instrucciones que siguen dentro de main ya no se ejecutan
    return 0;
// La mejor opción para pagar


    // Declaro un entero para guardar la opción de pago que se escriba
    int opcion;
    // Muestro el texto "1. Debido, 2. Credito y 3 efectivo" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "1. Debido, 2. Credito y 3 efectivo" << endl;
    // Leo del teclado y guardo la entrada en opcion
    cin >> opcion;
    // Reviso si se eligió uno que en el menú representa débito
    if (opcion == 1) {
        // Muestro el texto "estafa" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "estafa" << endl;
        // Muestro el texto "duplicar tarjeta" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "duplicar tarjeta" << endl;
        // Muestro el texto "robar identidad" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "robar identidad" << endl;
    // Si no se eligió uno reviso si se eligió dos que representa crédito
    }else if (opcion == 2) {
        // Muestro el texto "Historial crediticio" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Historial crediticio" << endl;
        // Muestro el texto "Puntos" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Puntos" << endl;
        // Muestro el texto "viajes" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "viajes" << endl;
        // Muestro el texto "regresa efectivo" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "regresa efectivo" << endl;
    // Si no se eligió ninguna opción anterior reviso si se eligió tres que representa efectivo
    }else if (opcion == 3) {
        // Muestro el texto "Te quedas sin dinero" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Te quedas sin dinero" << endl;
    // Cierro el bloque anterior y abro la alternativa que se ejecuta cuando no se cumple ninguna condición anterior de esta cadena
    }else {
        // Muestro el texto "Opcion no valida" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Opcion no valida" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }
// Esta llave cierra el bloque que estaba abierto
}
