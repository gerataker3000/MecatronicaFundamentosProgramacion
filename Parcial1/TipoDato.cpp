// Tema Tipos de datos
// Aquí guardo datos de una película con distintos tipos y después los muestro en pantalla
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
    // Horas del señor de los bolillos
    // Declaro duracion como entero corto pero este valor no cabe en el short de este entorno y no se guarda la duración que escribí
    short duracion = 600000000000000000;
    /**
     * End game CAMARA
     */
    // Declaro e inicializo anio como un entero con el valor 2019
    int anio = 2019;
    // Death Note sagarado sea

    // Guardo dos millones en un entero long y la L indica que el literal es de tipo long
    long reproduccion = 2000000L;

    // Guardo 20 en un entero long long y LL indica el tipo del literal aunque esta variable no se imprime después
    long long espectadores = 20LL;
    // Guardo un decimal en float y el literal de tipo double se convierte a float con su precisión disponible
    float calificacion = 100.1;
    // Guardo lo recaudado en double que permite más precisión que float
    double recaudado = 45600.5;
    // Guardo verdadero en un bool para indicar que está disponible
    bool disponible = true;
    // Guardo un solo carácter en char usando comillas simples
    char clasificacion = 'A';
    // Declaro un entero sin signo pero asigno menos uno y la conversión produce el máximo valor representable por unsigned int
    unsigned int numeroAsistente = -1;
    // Creo un objeto de tipo string llamado pelicua que guarda el título como texto
    string pelicua = "Los juegos del hambre";
    // Creo un arreglo con dos objetos string donde Katniss ocupa el índice cero y Peeta el índice uno
    string personaje[2] = {"Katniss","Peeta"};
    // Muestro el texto "Duracion: " y después el valor de duracion y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Duracion: " << duracion << endl;
    // Muestro el texto "Anio: " y después el valor de anio y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Anio: " << anio << endl;
    // Muestro el texto "Reproduccion: " y después el valor de reproduccion y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Reproduccion: " << reproduccion << endl;
    // Muestro el texto "Calificacion: " y después el valor de calificacion y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Calificacion: " << calificacion << endl;
    // Muestro el texto "Recaudado: " y después el valor de recaudado y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Recaudado: " << recaudado << endl;
    // Muestro el texto "Disponible: " y después disponible que se muestra como uno porque vale true y no se activó boolalpha para cout y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Disponible: " << disponible << endl;
    // Muestro el texto "Clasificacion: " y después el valor de clasificacion y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Clasificacion: " << clasificacion << endl;
    // Muestro el texto "Numero Asistente: " y después el valor de numeroAsistente y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Numero Asistente: " << numeroAsistente << endl;
    // Muestro el texto "Pelicua: " y después el valor de pelicua y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Pelicua: " << pelicua << endl;
    // Muestro el texto "Personaje: " y después el primer personaje que es Katniss porque los índices empiezan en cero y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Personaje: " << personaje[0] << endl;
    // Muestro el texto "Personaje: " y después el segundo personaje que es Peeta y endl agrega un salto de línea y vacía el búfer de salida
    cout << "Personaje: " << personaje[1] << endl;
    // Aquí termino main devolviendo cero para indicar una salida normal
    return 0;
// Esta llave cierra el bloque que estaba abierto
}
