#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mostrarPortada() {
    cout << "============================================================================" << endl;
    cout << "                   Republica Bolivariana De Venezuela           " << endl;
    cout << "      Ministerio del Poder Popular para la Educacion Universitaria        " << endl;
    cout << "          Universidad Nacional Experimental de la Gran Caracas          " << endl;
    cout << "       Trayecto 1 Semestre 2 - Sección: FLI30311 - Turno: Nocturno           " << endl;
    cout << "                  Materia: Algoritmo y Programacion           " << endl; 
    cout << "============================================================================" << endl;
    cout << endl;
    
}

void mostrarMenu() {
    cout << "=== MENU DE OPCION ===" << endl;
    cout << "1. Incluir" << endl;
    cout << "2. Modificar" << endl;
    cout << "3. Eliminar" << endl;
    cout << "4. Informes" << endl;
    cout << "0. Salir" << endl;
}

void incluir(vector<string>& datos) {
    string nuevoDato;
    cout << "Ingrese el dato a incluir: ";
    cin >> nuevoDato;
    datos.push_back(nuevoDato);
    cout << "Dato incluido exitosamente." << endl;
}

void modificar(vector<string>& datos) {
    int index;
    string nuevoDato;

    cout << "Ingrese el índice del dato a modificar (0 a " << datos.size() - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < datos.size()) {
        cout << "Ingrese el nuevo dato: ";
        cin >> nuevoDato;
        datos[index] = "nuevo Dato";
        cout << "Dato modificado exitosamente." << endl;
    } else {
        cout << "Índice inválido." << endl;
    }
}

void eliminar(vector<string>& datos) {
    int index;

    cout << "Ingrese el índice del dato a eliminar (0 a " << datos.size() - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < datos.size()) {
        datos.erase(datos.begin() + index);
        cout << "Dato eliminado exitosamente." << endl;
    } else {
        cout << "Índice inválido." << endl;
    }
}

void informes(const vector<string>& datos) {
    cout << "Listado de datos:" << endl;
    for (size_t i = 0; i < datos.size(); ++i) {
        cout << i << ": " << datos[i] << endl;
    }
}

int main() {
    mostrarPortada();

    vector<string> datos;
    int opcion;

    do {
        mostrarMenu();
        cout << "Opción elegida: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                incluir(datos);
                break;
            case 2:
                modificar(datos);
                break;
            case 3:
                eliminar(datos);
                break;
            case 4:
                informes(datos);
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }

        cout << endl; // Espacio entre iteraciones
    } while (opcion != 0);

    return 0;
}