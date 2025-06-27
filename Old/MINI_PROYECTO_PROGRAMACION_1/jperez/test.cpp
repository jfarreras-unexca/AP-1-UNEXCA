#include <iostream>
using namespace std;

// Funci�n del men� principal
void menuPrincipal();

// Funci�n del submen�
void submenu();

int main() {
    menuPrincipal();
    return 0;
}

// Implementaci�n del men� principal
void menuPrincipal() {
    int opcion;

    do {
        cout << "=== Men� Principal ===" << endl;
        cout << "1. Ir al Submen�" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                submenu();
                break;
            case 2:
                cout << "Saliendo del programa. �Adi�s!" << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != 2); // Se repite mientras el usuario no elija salir
}

// Implementaci�n del submen�
void submenu() {
    int opcion;

    do {
        cout << "\n=== Submen� ===" << endl;
        cout << "1. Realizar una acci�n" << endl;
        cout << "2. Volver al Men� Principal" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Acci�n realizada." << endl;
                break;
            case 2:
                cout << "Regresando al Men� Principal..." << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != 2); // Se repite mientras el usuario no elija volver
}
