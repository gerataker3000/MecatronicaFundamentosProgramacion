//
// Created by LegoC on 23/09/2026.
//
#include <iostream>
using namespace std;
void mandarMensajeAmor(string nombre, int dinero) {
    cout << "Hola mi amor "<< nombre<< endl;
    cout << "Como estas "<< endl;
    cout << "Te ves muy hermosa hoy"<< endl;
    cout << "Preparate hoy, yo llevo el dinero: $"<< dinero<< endl;
    cout << "y tu ya sabes"<< endl;
    cout << "=================="<< endl;
}

int main() {
    cout << "Métodos " << endl;
    string nombre = "Scarlet";
    mandarMensajeAmor(nombre,300);
    mandarMensajeAmor("Mega Fox transformers",500);
    mandarMensajeAmor("La bruja escarlata",250);
    mandarMensajeAmor("Margot",300);
    mandarMensajeAmor("Nose",1000);

}