#include <iostream>
using namespace std;
int main() {
    string contrasena;
    cout << "Contrasena: ";
    cin >> contrasena;
    string resultado= contrasena.length() >= 8 ? "Buena contraseña" : "CHico malo";
    cout << resultado;

    return 0;
    cout << "Gracias a dios ya es viernes" << endl;
    string categoria,resultados;
    cout << "Ingresa un categoria: ";
    cin >> categoria;
    resultados = (categoria == "anime") ? "Death note" : "Supernatural";
    cout << resultados << endl;
    return 0;
}