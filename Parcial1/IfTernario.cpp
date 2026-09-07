// Tema Operador ternario
// Aquí uso una condición para escoger entre dos textos y guardo el texto elegido en una variable
// Las explicaciones están en comentarios y no se ejecutan

// Aquí incluyo la biblioteca para leer con cin y mostrar datos con cout
#include <iostream>
// Con esto uso nombres como cout y cin sin escribir std seguido de dos signos de dos puntos
using namespace std;
// Aquí empieza la función principal que devuelve un entero y la llave abre su bloque de instrucciones
int main() {
    // Creo un objeto string vacío donde guardaré la contraseña
    string contrasena;
    // Muestro el texto "Contrasena: " sin agregar un salto de línea
    cout << "Contrasena: ";
    // Leo del teclado y guardo la entrada en contrasena hasta encontrar un espacio o un salto de línea
    cin >> contrasena;
    // Llamo al método length de la instancia contrasena y si su longitud es al menos ocho guardo el primer texto en resultado y si no guardo el segundo
    string resultado= contrasena.length() >= 8 ? "Buena contraseña" : "CHico malo";
    // Muestro el valor de resultado sin agregar un salto de línea
    cout << resultado;


    // Aquí termino main devolviendo cero para indicar una salida normal y las instrucciones que siguen dentro de main ya no se ejecutan
    return 0;
    // Muestro el texto "Gracias a dios ya es viernes" y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Gracias a dios ya es viernes" << endl;
    // Creo dos objetos string vacíos uno para la categoría y otro para el resultado
    string categoria,resultados;
    // Muestro el texto "Ingresa un categoria: " sin agregar un salto de línea
    cout << "Ingresa un categoria: ";
    // Leo del teclado y guardo la entrada en categoria hasta encontrar un espacio o un salto de línea
    cin >> categoria;
    // Comparo la categoría con anime y guardo Death note si coincide o Supernatural en cualquier otro caso
    resultados = (categoria == "anime") ? "Death note" : "Supernatural";
    // Muestro el valor de resultados y endl agrega un salto de línea y vacía el búfer de salida
    cout << resultados << endl;
    // Aquí termino main devolviendo cero para indicar una salida normal
    return 0;
// Esta llave cierra el bloque que estaba abierto
}
