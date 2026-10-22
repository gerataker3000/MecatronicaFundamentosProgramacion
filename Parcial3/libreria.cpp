#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

int main() {
    ofstream salida("diario.txt");

    if (!salida) {
        cout << "Error al crear el archivo" << endl;
        return 1;
    }

    salida << "El castillo despierta" << endl;
    salida.close();

    cout << "Archivo: "
         << filesystem::absolute("diario.txt")
         << endl;

    ifstream entrada("diario.txt");

    if (!entrada) {
        cout << "Error al leer el archivo" << endl;
        return 1;
    }

    string linea;

    while (getline(entrada, linea)) {
        cout << linea << endl;
    }

    entrada.close();

    return 0;
}