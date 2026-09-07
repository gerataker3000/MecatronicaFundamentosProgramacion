// Tema Variables y constantes
// Aquí cambio valores de variables y calculo el costo de unos productos usando un IVA que permanece fijo
// Las explicaciones están en comentarios y no se ejecutan

//
// Created by LegoC on 26/08/2026.
//
// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main() {
    // Creo una variable entera y empiezo con una película
    int cantidadPelis = 1;
    // Incremento cantidadPelis en uno así que pasa de uno a dos
    cantidadPelis++;
    // Muestro el valor de cantidadPelis y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadPelis << endl;
    // Esta declaración de un objeto string está comentada y por eso no se ejecuta
    //string NombreCompleto = "Nombre";
    // Este ejemplo está comentado y class no serviría como nombre de variable porque es una palabra reservada de C++
    //string class = "Nombre";
    // Esta salida está comentada y solo mostraría NombreCompleto si se habilitara junto con su declaración
    //cout << NombreCompleto << endl;
    //Ingenieria 30 blusas
    // Guardo 30 como cantidad entera de productos
    int cantidadProductos = 30;
    // Guardo el precio de 200 en float y la f indica que el literal ya es float
    float precioProducto = 200.0f;
    // Creo una constante float que representa el dieciséis por ciento y que no puedo reasignar después
    const float IVA = 0.16f;
    // Multiplico 30 productos por 200 y guardo un subtotal de 6000
    float subtotal =cantidadProductos*precioProducto;
    // Multiplico el subtotal por la tasa de IVA y obtengo aproximadamente 960 por la representación de float
    float impuesto = subtotal*IVA;
    // Sumo subtotal e impuesto para obtener un total aproximado de 6960
    float total = subtotal + impuesto;
    // Muestro el texto "Cantidad" y después el valor de cantidadProductos y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Cantidad" << cantidadProductos << endl;
    // Muestro el texto "Precio $" y después el valor de precioProducto y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Precio $" << precioProducto << endl;
    // Muestro el texto "Subtotal $" y después el valor de subtotal y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Subtotal $" << subtotal << endl;
    // Muestro el texto "Impuesto $" y después el valor de impuesto y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Impuesto $" << impuesto << endl;
    // Muestro el texto "Total $" y después el valor de total y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Total $" << total << endl;



    // Muestro el texto "Variables y constantes :D" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Variables y constantes :D" << endl;
    // Declaro una variable entera sin valor inicial y debo asignarle un valor antes de leerla
    int cantidadSalarioQueQuiero;
    // Asigno 4000 a la variable del salario
    cantidadSalarioQueQuiero = 4000;
    // Muestro el valor de cantidadSalarioQueQuiero y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadSalarioQueQuiero << endl;
    // Cambio el salario guardado de 4000 a 12000
    cantidadSalarioQueQuiero = 12000;
    // Muestro el valor de cantidadSalarioQueQuiero y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadSalarioQueQuiero << endl;
    // Cambio otra vez el salario y ahora queda en 30000
    cantidadSalarioQueQuiero = 30000;
    // Muestro el valor de cantidadSalarioQueQuiero y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadSalarioQueQuiero << endl;
    // Muestro el texto "----------------------" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "----------------------" << endl;
    // Creo una variable entera que empieza con una deuda de cero
    int cantidadQueDeboAlSat = 0;
    // Muestro el valor de cantidadQueDeboAlSat y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadQueDeboAlSat << endl;
    // Cambio el valor guardado de la deuda a 100000
    cantidadQueDeboAlSat = 100000;
    // Muestro el valor de cantidadQueDeboAlSat y endl agrega un salto de línea y vacía el búfer de salida
    cout << cantidadQueDeboAlSat << endl;
// Esta llave cierra el bloque que estaba abierto
}
