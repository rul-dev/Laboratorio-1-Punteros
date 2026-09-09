#include <iostream>
using namespace std;

void mostrarSaldo(double saldo){
    cout << "Saldo actual: "<< saldo<< endl;
}

int main()
{
    int opcion;
    double saldo = 1000
    ;
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
            mostrarSaldo(saldo);
            break;
        case 2:
            cout << "Retirar dinero" << endl;
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