// Tema Condicional if else
// Aquí elijo entre dos caminos según una edad o según si alcanza el saldo para un retiro
// Las explicaciones están en comentarios y no se ejecutan

// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main() {
    // Declaro este entero pero su nombre no coincide con edadParaJugarGTA6 que uso abajo y eso causa un error de compilación
    int edadParaJugarGTA617;
    // Muestro el texto "Edad :" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Edad :" << endl;
    // Intento leer la edad pero esta variable no está declarada con este nombre en el código actual
    cin >> edadParaJugarGTA6;
    // La intención es entrar cuando la edad sea al menos 18 aunque primero habría que corregir el nombre de la variable
    if (edadParaJugarGTA6 >=18) {
        // Muestro el texto "19 de noviembre ahí nos vemos :D" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "19 de noviembre ahí nos vemos :D" << endl;
    // Cierro el bloque anterior y abro la alternativa que se ejecuta cuando no se cumple ninguna condición anterior de esta cadena
    }else {
        // Muestro el texto "Fornite, canicas, Tazos, Minecraft, Tetrix" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Fornite, canicas, Tazos, Minecraft, Tetrix" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }


    // Aquí termino main devolviendo cero para indicar una salida normal y las instrucciones que siguen dentro de main ya no se ejecutan
    return 0;
    // If else retirar de un banco
    // Declaro dos variables double en la misma línea y solo saldo empieza en 4000 mientras retiro espera una entrada
    double saldo = 4000,retiro;
    // Muestro el texto "Saldo: " y después el valor de saldo y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Saldo: " << saldo << endl;
    // Muestro el texto "Cuanto vas a retirar: " y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Cuanto vas a retirar: "<< endl;
    // Leo del teclado y guardo la entrada en retiro
    cin >> retiro;
    // Reviso si el retiro es menor o igual al saldo aunque esta condición por sí sola también acepta valores negativos
    if (retiro <= saldo) {
        // Esta forma comentada hace la misma resta y asignación que saldo menos igual retiro
        //saldo = saldo - retiro;
        // Resto el retiro al saldo y guardo el nuevo valor en la misma variable
        saldo -=  retiro;
        // Muestro el texto "Saldo: " y después el valor de saldo y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Saldo: " << saldo << endl;
    // Cierro el bloque anterior y abro la alternativa que se ejecuta cuando no se cumple ninguna condición anterior de esta cadena
    }else {
        // Muestro el texto "Ponte a chambear :D noob" y endl agrega un salto de línea y vacía el búfer de salida
        cout << "Ponte a chambear :D noob" << endl;
    // Esta llave cierra el bloque que estaba abierto
    }
// Esta llave cierra el bloque que estaba abierto
}
