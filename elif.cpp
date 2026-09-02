//
// Created by LegoC on 02/09/2026.
//
#include <iostream>
using namespace std;
int main () {
   // Saber si te quiere :(
    string opcion2 = "Te amo";
    if (opcion2 == "Te amo") {
        cout << "Te ama" << endl;
    } else if (opcion2 == "Te quiere") {
        cout << "Te quiere" << endl;
    }else if (opcion2 == "Le gustas") {
        cout << "Le gustas" << endl;
    }else {
        cout << "Animo lincito" << endl;
    }


    return 0;
// La mejor opción para pagar


    int opcion;
    cout << "1. Debido, 2. Credito y 3 efectivo" << endl;
    cin >> opcion;
    if (opcion == 1) {
        cout << "estafa" << endl;
        cout << "duplicar tarjeta" << endl;
        cout << "robar identidad" << endl;
    }else if (opcion == 2) {
        cout << "Historial crediticio" << endl;
        cout << "Puntos" << endl;
        cout << "viajes" << endl;
        cout << "regresa efectivo" << endl;
    }else if (opcion == 3) {
        cout << "Te quedas sin dinero" << endl;
    }else {
        cout << "Opcion no valida" << endl;
    }
}