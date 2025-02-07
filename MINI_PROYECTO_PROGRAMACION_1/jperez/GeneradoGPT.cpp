/*-------------------------------------------------
Fecha: 07/02/2025
Catedra: APT1312 - Programaci�n II
Nombre del Programa: Sistema de Gesti�n de Notas
Lenguaje de Programacion: C++
Programador: Estudiante de Ingenier�a Inform�tica (2do semestre)
Descripcion del Programa:
Este programa permite la gesti�n de notas de los estudiantes de Programaci�n I.
Incluye opciones para cargar datos, modificar informaci�n y consultar notas.

Comentarios: Basado en la gu�a de Mini Proyecto T1 y T2
-------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

// Definici�n de estructuras
struct Estudiante {
    int codigo;
    string cedula;
    string nombre;
    int codMateria;
};

struct Notas {
    int codigoEst;
    float np1, np2, np3, np4;
    float pnp1 = 0.15, pnp2 = 0.25, pnp3 = 0.30, pnp4 = 0.30;
    float notaFinal;
};

// Variables globales
Estudiante estudiantes[10];
Notas notas[10];
int totalEstudiantes = 0;

// Prototipos de funciones
void menuPrincipal();
void cargarEstudiantes();
void cargarNotas();
void modificarEstudiante();
void modificarNotas();
void consultarNotas();
void emitirActa();



// Definici�n de funciones
void menuPrincipal() {
    int opcion;
    do {
        cout << "\nMENU PRINCIPAL" << endl;
        cout << "1. Cargar Datos de Estudiantes" << endl;
        cout << "2. Cargar Notas Parciales" << endl;
        cout << "3. Modificar Datos de Estudiantes" << endl;
        cout << "4. Modificar Notas" << endl;
        cout << "5. Consultar Notas" << endl;
        cout << "6. Emitir Acta de Notas" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: cargarEstudiantes(); break;
            case 2: cargarNotas(); break;
            case 3: modificarEstudiante(); break;
            case 4: modificarNotas(); break;
            case 5: consultarNotas(); break;
            case 6: emitirActa(); break;
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);
}

void cargarEstudiantes() {
    if (totalEstudiantes >= 10) {
        cout << "No se pueden agregar m�s estudiantes." << endl;
        return;
    }

    cout << "Ingrese el c�digo del estudiante: ";
    cin >> estudiantes[totalEstudiantes].codigo;
    cin.ignore();
    cout << "Ingrese la c�dula: ";
    getline(cin, estudiantes[totalEstudiantes].cedula);
    cout << "Ingrese el nombre y apellido: ";
    getline(cin, estudiantes[totalEstudiantes].nombre);
    cout << "Ingrese el c�digo de la materia: ";
    cin >> estudiantes[totalEstudiantes].codMateria;
    totalEstudiantes++;
    cout << "Estudiante agregado correctamente." << endl;
}

void modificarEstudiante() {
    int codigo;
    cout << "Ingrese el c�digo del estudiante a modificar: ";
    cin >> codigo;
    cin.ignore();

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].codigo == codigo) {
            cout << "Ingrese la nueva c�dula: ";
            getline(cin, estudiantes[i].cedula);
            cout << "Ingrese el nuevo nombre y apellido: ";
            getline(cin, estudiantes[i].nombre);
            cout << "Ingrese el nuevo c�digo de la materia: ";
            cin >> estudiantes[i].codMateria;
            cout << "Datos actualizados correctamente." << endl;
            return;
        }
    }
    cout << "Estudiante no encontrado." << endl;
}

void consultarNotas() {
    int codigo;
    cout << "Ingrese el c�digo del estudiante a consultar: ";
    cin >> codigo;

    for (int i = 0; i < totalEstudiantes; i++) {
        if (notas[i].codigoEst == codigo) {
            cout << "Notas del estudiante: " << endl;
            cout << "Nota 1: " << notas[i].np1 << endl;
            cout << "Nota 2: " << notas[i].np2 << endl;
            cout << "Nota 3: " << notas[i].np3 << endl;
            cout << "Nota 4: " << notas[i].np4 << endl;
            cout << "Nota Final: " << notas[i].notaFinal << endl;
            return;
        }
    }
    cout << "Estudiante no encontrado." << endl;
}


// Funci�n Principal
int main() {
    menuPrincipal();
    return 0;
}
