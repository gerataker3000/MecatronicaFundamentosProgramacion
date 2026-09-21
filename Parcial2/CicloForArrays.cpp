
#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    string categoriaFeas[2];
    categoriaFeas[0] = "La que hable mal de una dama";
    categoriaFeas[1] = "La que hable madl de cualquier cosa";

    string categorias[] = {"Metal",
          "Rock","Jazz fusion",
          "Pop","Bluz"};

    for (int i = 0; i < categorias->length(); i++) {
        if (categorias[i] == "Metal") {
            cout << categorias[i] << endl;
            cout << "Metallica, Bitterwet, Loney day, System Of A Down - Lonely Day " << endl;
        }

        if (categorias[i] == "Rock") {
            // IMAGINAR QUE NE ME GUSTA PERO SI ME GUSTA
            continue;
        }

        if (categorias[i] == "Jazz fusion") {
            cout << categorias[i] << endl;
            cout << "Jazz fusion, UUUUUUUUUU" << ends;
            break;
        }

        if (categorias[i] == "Pop") {
            cout << categorias[i] << endl;
            cout << "Chayyane, Michael Jackson" << ends;
        }

    }


    return 1;

    //Imprimir uno por uno :D
    cout << categorias[0] << endl;
    cout << categorias[1] << endl;
    cout << categorias[2] << endl;
    cout << categorias[3] << endl;
    cout << categorias[4] << endl;

    cout << "Modificar" << endl;
    categorias[4] = "Country";
    cout << categorias[4] << endl;


    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "Programación avanzada chida, gracias a dios es viernos" << endl;
    return 0;
}