/*-------------------------------------------------
Fecha: 07/02/2025
Catedra: APT1312 - Programación II
Nombre del Programa: Sistema de Gestión de Notas
Lenguaje de Programacion: C++
Programador: Estudiante de Ingeniería Informática (2do semestre)
Descripcion del Programa:
Este programa permite la gestión de notas de los estudiantes de Programación I.
Incluye opciones para cargar datos, modificar información y consultar notas.

Comentarios: Basado en la guía de Mini Proyecto T1 y T2
-------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

// Definición de estructuras
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



// Definición de funciones
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
        cout << "Seleccione una opción: ";
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
            default: cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);
}

void cargarEstudiantes() {
    if (totalEstudiantes >= 10) {
        cout << "No se pueden agregar más estudiantes." << endl;
        return;
    }

    cout << "Ingrese el código del estudiante: ";
    cin >> estudiantes[totalEstudiantes].codigo;
    cin.ignore();
    cout << "Ingrese la cédula: ";
    getline(cin, estudiantes[totalEstudiantes].cedula);
    cout << "Ingrese el nombre y apellido: ";
    getline(cin, estudiantes[totalEstudiantes].nombre);
    cout << "Ingrese el código de la materia: ";
    cin >> estudiantes[totalEstudiantes].codMateria;
    totalEstudiantes++;
    cout << "Estudiante agregado correctamente." << endl;
}

void modificarEstudiante() {
    int codigo;
    cout << "Ingrese el código del estudiante a modificar: ";
    cin >> codigo;
    cin.ignore();

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].codigo == codigo) {
            cout << "Ingrese la nueva cédula: ";
            getline(cin, estudiantes[i].cedula);
            cout << "Ingrese el nuevo nombre y apellido: ";
            getline(cin, estudiantes[i].nombre);
            cout << "Ingrese el nuevo código de la materia: ";
            cin >> estudiantes[i].codMateria;
            cout << "Datos actualizados correctamente." << endl;
            return;
        }
    }
    cout << "Estudiante no encontrado." << endl;
}

void consultarNotas() {
    int codigo;
    cout << "Ingrese el código del estudiante a consultar: ";
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


// Función Principal
int main() {
    menuPrincipal();
    return 0;
}
