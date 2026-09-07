// Tema Condicional if simple y operador AND
// Aquí ejecuto un bloque solamente si se cumple una condición y en el segundo ejemplo junto varias condiciones
// Las explicaciones están en comentarios y no se ejecutan

//
// Created by LegoC on 02/09/2026.
//
// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main() {
    // Uso un entero con valor cero para representar que no tengo celular aunque también podría modelarlo con bool
    int tienesCelular = 0;

    // Comparo tienesCelular con uno y como vale cero no entro al bloque
    if (tienesCelular == 1) {
        // Muestro el texto "Armar among us" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Armar among us" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }



    // Aquí termino main devolviendo cero para indicar una salida normal y las instrucciones que siguen dentro de main ya no se ejecutan
    return 0;
    //If simple entrar al laboratorio
    // Diagrama de flujo :D
    // Declaro un entero para guardar la edad que escriba el usuario
    int edad;
    // Declaro un bool para guardar si se tiene el diagrama y todavía no le doy un valor
    bool diagramaFlujo;
    // Muestro el texto "Edad: " y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Edad: " << endl;
    // Leo del teclado y guardo la entrada en edad
    cin >> edad;
    // Muestro el texto "Diagrama: " y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Diagrama: " << endl;
    // Activo la lectura de booleanos como las palabras true o false y guardo el resultado en diagramaFlujo
    cin >> boolalpha >> diagramaFlujo;
    // AND exige que ambas condiciones sean verdaderas y deja de evaluar cuando encuentra una falsa
    // AND &&
    // OR requiere al menos una condición verdadera y deja de evaluar cuando encuentra una verdadera
    // OR ||

    // Entro solamente si la edad es al menos 18 y el diagrama es verdadero y la edad no supera 100
    if (edad >= 18 && diagramaFlujo && edad <= 100) {
        // Muestro el texto "Bievenido al laboratorio de dexter :D" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Bievenido al laboratorio de dexter :D" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }
    // Aquí termino main devolviendo cero para indicar una salida normal
    return 0;
// Esta llave cierra el bloque que estaba abierto
}
