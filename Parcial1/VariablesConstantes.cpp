//
// Created by LegoC on 26/08/2026.
//
#include <iostream>
using namespace std;
int main() {
    int cantidadPelis = 1;
    cantidadPelis++;
    cout << cantidadPelis << endl;
    //string NombreCompleto = "Nombre";
    //string class = "Nombre";
    //cout << NombreCompleto << endl;
    //Ingenieria 30 blusas
    int cantidadProductos = 30;
    float precioProducto = 200.0f;
    const float IVA = 0.16f;
    float subtotal =cantidadProductos*precioProducto;
    float impuesto = subtotal*IVA;
    float total = subtotal + impuesto;
    cout << "Cantidad" << cantidadProductos << endl;
    cout << "Precio $" << precioProducto << endl;
    cout << "Subtotal $" << subtotal << endl;
    cout << "Impuesto $" << impuesto << endl;
    cout << "Total $" << total << endl;



    cout << "Variables y constantes :D" << endl;
    int cantidadSalarioQueQuiero;
    cantidadSalarioQueQuiero = 4000;
    cout << cantidadSalarioQueQuiero << endl;
    cantidadSalarioQueQuiero = 12000;
    cout << cantidadSalarioQueQuiero << endl;
    cantidadSalarioQueQuiero = 30000;
    cout << cantidadSalarioQueQuiero << endl;
    cout << "----------------------" << endl;
    int cantidadQueDeboAlSat = 0;
    cout << cantidadQueDeboAlSat << endl;
    cantidadQueDeboAlSat = 100000;
    cout << cantidadQueDeboAlSat << endl;
}