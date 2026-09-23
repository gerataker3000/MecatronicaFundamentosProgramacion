//
// Created by LegoC on 23/09/2026.
//
#include <iostream>
using namespace std;
void mandarMensajeAmor(string nombre ="linda", int dinero=5000) {
    cout << "Hola mi amor "<< nombre<< endl;
    cout << "Como estas "<< endl;
    cout << "Te ves muy hermosa hoy"<< endl;
    cout << "Preparate hoy, yo llevo el dinero: $"<< dinero<< endl;
    cout << "y tu ya sabes"<< endl;
    cout << "=================="<< endl;
}

bool esCorrecto(int calificacion) {
    if (calificacion > 70) {
        return true;
    }
    return false;
}

int calcularCalificacion(int calif1, int calif2) {
    if (!esCorrecto(calif1)) {
        cout << " Pasame please, i love you" << endl;
        exit(1);
    }

    return (calif1 + calif2)/2;
}

void retirarBanco(double saldo,double retiro) {
    cout << "Saldo: " << saldo << endl;
    cout << "Cuanto vas a retirar: "<< endl;
    cin >> retiro;
    if ( retiro <= saldo && retiro > 0) {
        saldo -=  retiro;
        cout << "Saldo: " << saldo << endl;
    }else {
        cout << "Ponte a chambear :D noob" << endl;
    }

}

int main() {
    double saldo = 4000,retiro;
    retirarBanco(saldo,retiro);


    cout << "Métodos " << endl;
    string nombre = "Scarlet";
    mandarMensajeAmor(nombre,300);
    mandarMensajeAmor("Mega Fox transformers",500);
    mandarMensajeAmor("La bruja escarlata",250);
    mandarMensajeAmor("Margot",300);
    mandarMensajeAmor("Nose",1000);
    mandarMensajeAmor();

    int calif = calcularCalificacion(25,100);
    cout << calif << endl;

    cout << "Calificacion: " << calcularCalificacion(38,92) << endl;
}