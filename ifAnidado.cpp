//
// Created by LegoC on 02/09/2026.
//
#include <iostream>
using namespace std;
int main () {
// If anidaddo
    string tipo;
    int cantidadTrabajos = 3;
    double cantidadDinero = 500000;
    cout << "Escribe Asalariado u Honorario" << endl;
    cin >> tipo;
    if (tipo == "Asalariado") {
        cout << "Tienes un patron" << endl;
        if (cantidadTrabajos >= 2) {
            cout << "Tienes obligación fiscal: declaración anual" << endl;
        }
    }else {
        cout << "Eres honorario" << endl;
    }
}