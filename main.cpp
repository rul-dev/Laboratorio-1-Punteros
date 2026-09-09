#include <iostream>
using namespace std;

void retirarDinero(double &saldo)
{
    double cantidad;

    do
    {
        cout << "Ingrese la cantidad a retirar: ";
        cin >> cantidad;

        if (cantidad <= 0)
        {
            cout << "Cantidad invalida. Por favor, ingrese una cantidad positiva." << endl;
        }

    } while (cantidad <= 0);

    if (cantidad > saldo)
    {
        cout << "Saldo insuficiente. No se puede realizar el retiro." << endl;
    }
    else
    {
        saldo -= cantidad;
        cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
    }
}

int main()
{
    int opcion;
    double saldo = 1000.0; // Saldo inicial del cajero
    do
    {
        cout << "------------------ Menu de cajero ------------------------" << endl;
        cout << "--------------- 1. Consultar saldo -----------------------" << endl;
        cout << "--------------- 2. Retirar dinero ------------------------" << endl;
        cout << "--------------- 3. Depositar dinero ----------------------" << endl;
        cout << "--------------- 4. Salir ---------------------------------" << endl
             << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;
        system("cls"); // Limpiar la pantalla (funciona en Windows)

        switch (opcion)
        {
        case 1:
            cout << "Consultar saldo" << endl;
            break;
        case 2:
            retirarDinero(saldo);
            break;
        case 3:
            cout << "Depositar dinero" << endl;
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
        }
    } while (opcion != 4);
    return 0;
}