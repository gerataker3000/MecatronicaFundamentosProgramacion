#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    string entrada;

    cout << "Edad del cazador: ";
    getline(cin, entrada);

    int edad = stoi(entrada);
    cout << "Edad registrada: " << edad << endl;

    cout << "Registro finalizado";
    return 0;
}