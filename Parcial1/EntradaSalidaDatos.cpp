// Tema Entrada y salida de datos
// Aquí pido un número de visitas al cine y un nombre y después muestro lo que se escribió
// Las explicaciones están en comentarios y no se ejecutan

//
// Created by LegoC on 28/08/2026.
//
// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main() {
    // Declaro un entero para guardar el número de visitas que voy a pedir
    int numero;
    // Muestro el texto "Numero de visitas al cine este año: " sin agregar un salto de línea
    cout << "Numero de visitas al cine este año: ";
    // Leo del teclado y guardo la entrada en numero
    cin >> numero;
    // Muestro el texto "Numero dado" y después el valor de numero y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Numero dado" << numero << endl;
    // Creo un objeto string que empieza vacío y después guardará el nombre
    string nombre;
    // Muestro el texto "Quien visito: " y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Quien visito: "<< endl;
    // Primero ws descarta espacios y saltos de línea pendientes y luego getline guarda la línea completa en nombre incluyendo sus espacios internos
    getline(cin >> ws, nombre);
    // Muestro el texto "Nombre : " y después el valor de nombre y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Nombre : " << nombre << endl;

// Esta llave cierra el bloque que estaba abierto
}
