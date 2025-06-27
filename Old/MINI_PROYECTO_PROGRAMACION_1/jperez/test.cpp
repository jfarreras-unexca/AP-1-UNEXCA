#include <iostream>
using namespace std;

// Función del menú principal
void menuPrincipal();

// Función del submenú
void submenu();

int main() {
    menuPrincipal();
    return 0;
}

// Implementación del menú principal
void menuPrincipal() {
    int opcion;

    do {
        cout << "=== Menú Principal ===" << endl;
        cout << "1. Ir al Submenú" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                submenu();
                break;
            case 2:
                cout << "Saliendo del programa. ¡Adiós!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 2); // Se repite mientras el usuario no elija salir
}

// Implementación del submenú
void submenu() {
    int opcion;

    do {
        cout << "\n=== Submenú ===" << endl;
        cout << "1. Realizar una acción" << endl;
        cout << "2. Volver al Menú Principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Acción realizada." << endl;
                break;
            case 2:
                cout << "Regresando al Menú Principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 2); // Se repite mientras el usuario no elija volver
}
