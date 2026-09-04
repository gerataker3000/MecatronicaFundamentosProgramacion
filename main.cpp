#include <iostream>
using namespace std;
int main() {
    cout << "Gracias a dios ya es viernes" << endl;
    string categoria;
    cout << "Ingresa un categoria: ";
    cin >> categoria;
    string resultados = (categoria == "anime") ? "Death note" : "Supernatural";
    cout << resultados << endl;
    /*
    cout << (10 > 2) << endl;
    cout << (10 < 2) << endl;
    cout << (10 == 2) << endl;
    cout << (10 != 2) << endl;
    cout << (10 >= 2) << endl;
    cout << (10 <= 2) << endl;
    */
    return 0;
}