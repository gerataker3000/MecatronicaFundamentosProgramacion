#include <iostream>
using namespace std;
int main() {
    int edadParaJugarGTA617;
    cout << "Edad :" << endl;
    cin >> edadParaJugarGTA6;
    if (edadParaJugarGTA6 >=18) {
        cout << "19 de noviembre ahí nos vemos :D" << endl;
    }else {
        cout << "Fornite, canicas, Tazos, Minecraft, Tetrix" << endl;
    }


    return 0;
    // If else retirar de un banco
    double saldo = 4000,retiro;
    cout << "Saldo: " << saldo << endl;
    cout << "Cuanto vas a retirar: "<< endl;
    cin >> retiro;
    if (retiro <= saldo) {
        //saldo = saldo - retiro;
        saldo -=  retiro;
        cout << "Saldo: " << saldo << endl;
    }else {
        cout << "Ponte a chambear :D noob" << endl;
    }
}