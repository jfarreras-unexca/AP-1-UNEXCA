
//Fecha: 04/12/2024
//Catedra: APT1312_SEM-II
//NombredelPrograma: Registro de alumnos de la unexca - Vectores
//Lenguaje de Programacion: c++
//Programador: Sublime Text / CodeBlock
//Cedula      Apellidos           Nombres
//26271246	FLORES DIAZ         YANETSI RAYMAR
//Descripcion del Programa:
//Registro de notas de alumnos - vectores - Proyecto de Programacion 1
//seccion: 30312 5 a 7


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

//estructuras para los datos
struct Estudiante {
    string codigo;
    string cedula;
    string nombre;
    string apellido;
    string codigoMateria;
    };

struct Notas {
    float nota1, porc1;
    float nota2, porc2;
    float nota3, porc3;
    float nota4, porc4;
    float notaFinal;
    float porcFinal;
};


//declaración de funciones
void menu(vector<Estudiante>& estudiantes, vector<Notas>& notas);
void cargarDatosEstudiantes(vector<Estudiante>&estudiantes);
void cargarNotas(vector<Notas>&notas);
void modificarNotas(std::vector<Notas>& notas);
void consultarNotasIndividual(const vector<Estudiante>& estudiantes, const vector<Notas>&notas);
void modificarDatosEstudiante(vector<Estudiante>& estudiantes);
void calcularNotaFinal(Notas& nota);

//función pprincipal
int main() {
    vector<Estudiante> estudiantes(10);
    vector<Notas> notas(10);
    menu(estudiantes, notas);
    return 0;
}

//implementación de funciones
void menu(vector<Estudiante>& estudiantes, vector<Notas>& notas) {
    int opcion;
    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Cargar datos de los estudiantes\n";
        cout << "2. Cargar notas parciales de los estudiantes\n";
        cout << "3. Modificar datos de un estudiante\n";
        cout << "4. Modificar notas de un estudiante\n";
        cout << "5. Consultar notas individuales\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cargarDatosEstudiantes(estudiantes);
                break;
            case 2:
                cargarNotas(notas);
                break;
            case 3:
                modificarDatosEstudiante(estudiantes);
                break;
            case 4:
                modificarNotas(notas);
                break;
            case 5:
                consultarNotasIndividual(estudiantes, notas);
                break;
            case 6:
                cout <<"Saliendo del programa...\n";
                break;
            default:
                cout <<"Opción inválida, intente de nuevo.\n";


        }

    }while (opcion !=6);


}

void cargarDatosEstudiantes(vector<Estudiante>& estudiantes) {
    cout << "\n--- Cargar Datos de Estudiantes ---\n";
    for (int i = 0; i < estudiantes.size(); i++) {
        cout << "Estudiante " << i + 1 <<":\n";
        cout << "Código: ";
        cin >> estudiantes[i].codigo;
        cout << "Cédula: ";
        cin >> estudiantes[i].cedula;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Apellido: ";
        cin >> estudiantes[i].apellido;
        cout <<  "Código de materia: ";
        cin >> estudiantes[i].codigoMateria;
    }

}

void cargarNotas(vector<Notas>&notas) {
    cout << "\n--- Cargar Notas Parciales ---\n";
    for (int i = 0; i <notas.size(); i++) {
        cout << "Notas para el estudiante" << i +1 << ":\n";


//Nota 1 y porcentaje
    do {
        cout << "Nota 1 y porcentaje: ";
        cin >> notas[i].nota1 >> notas[i].porc1;
    if (notas[i].nota1 < 0 || notas[i].nota1 > 10 || notas[i].porc1 < 0 || notas[i].porc1 > 100) {

    cout <<"Datos inválidos. Asegurese de que la nota este entre 0-10 y el porcentaje entre 0 y 100. \n";

    }

       } while (notas[i].nota1 < 0 || notas[i].nota1 > 10 || notas[i].porc1 < 0 || notas[i].porc1 > 100);


    //Nota 2 y porcentaje
    do {
        cout << "Nota 2 y porcentaje: ";
        cin >> notas[i].nota2 >> notas[i].porc2;
    if (notas[i].nota2 < 0 || notas[i].nota2 > 10 || notas[i].porc2 < 0 || notas[i].porc2 > 100) {

    cout <<"Datos inválidos. Asegurese de que la nota este entre 0-10 y el porcentaje entre 0 y 100. \n";

    }

       } while (notas[i].nota1 < 0 || notas[i].nota1 > 10 || notas[i].porc1 < 0 || notas[i].porc1 > 100);


    //Nota 3 y porcentaje
    do {
        cout << "Nota 3 y porcentaje: ";
        cin >> notas[i].nota3 >> notas[i].porc3;
    if (notas[i].nota3 < 0 || notas[i].nota3 > 10 || notas[i].porc3 < 0 || notas[i].porc3 > 100) {

    cout <<"Datos inválidos. Asegurese de que la nota este entre 0-10 y el porcentaje entre 0 y 100. \n";

    }

       } while (notas[i].nota1 < 0 || notas[i].nota1 > 10 || notas[i].porc1 < 0 || notas[i].porc1 > 100);


    //Nota 4 y porcentaje
    do {
        cout << "Nota 4 y porcentaje: ";
        cin >> notas[i].nota4 >> notas[i].porc4;
    if (notas[i].nota4 < 0 || notas[i].nota4 > 10 || notas[i].porc4 < 0 || notas[i].porc4 > 100) {

    cout <<"Datos inválidos. Asegurese de que la nota este entre 0-10 y el porcentaje entre 0 y 100. \n";

    }

       } while (notas[i].nota1 < 0 || notas[i].nota1 > 10 || notas[i].porc1 < 0 || notas[i].porc1 > 100);

    //calcular la nota final

        calcularNotaFinal(notas[i]);
    }

}

void modificarDatosEstudiante(vector<Estudiante>& estudiantes){
    string codigo;
    cout <<"\n--- Modificar datos de un estudiante ---\n";
    cout <<"Ingrese el codigo del estudiante: ";
    cin >> codigo;

    bool encontrado = false;


    for (size_t i = 0; i < estudiantes.size(); ++i) {
        if (estudiantes[i].codigo == codigo) {
            encontrado = true;

            cin.ignore(); //limpiar antes de usar el getline
            cout << "Nuevo nombre: ";
            getline (cin, estudiantes[i].nombre);
            cout << "Nuevo apellido: ";
            getline (cin, estudiantes[i].apellido);
            cout << "Nueva cédula: ";
            getline (cin, estudiantes[i].cedula);
            cout << "Nuevo código de materias: ";
            getline (cin, estudiantes[i].codigoMateria);
            cout << "Datos actualizados correctamente \n";
            return; //salir de la funcion despues de actualizar

        }
    }
    if (!encontrado){

    cout << "Estudiante no encontrado.\n";
    }
}

float LeerNota(const std::string& mensaje){
    float valor;
    while (true) {
        std::cout << mensaje;
        std::cin >> valor;
        if (std::cin.fail() || valor < 0.0f || valor > 10.0f) {
        std::cout <<"Entrada invalida. ingrese un numero entre 0 y 10. \n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else{
            break;
        }
        }
        return valor;
    }


void modificarNotas(std::vector<Notas>& notas){
    int index;
    std::cout << "\n--- Modificar notas de un estudiante ---\n";
    std::cout << "Ingrese el índice del estudiante (1-" << notas.size() << "): ";
    std::cin >> index;

    if (std::cin.fail() || index < 1 || index > static_cast<int>(notas.size())){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Índice inválido.\n";
    return;

    }

    index--; //ajustar indice

    //funcion para leer un numero flotante

    auto LeerNota = [] (float& variable) {

    while (true) {
    std::cin >> variable;
    if (std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout <<"Entrada invalida. por favor ingrese un numero valido: ";

    }else {
        break;

    }

            }


        };

//solicitar notas y porcentaje

    notas[index].nota1 = LeerNota("Nueva nota 1: ");
    notas[index].porc1 = LeerNota("Porcentaje de la nota 1: ");

    notas[index].nota2 = LeerNota("Nueva nota 2: ");
    notas[index].porc2 = LeerNota("Porcentaje de la nota 2: ");

    notas[index].nota3 = LeerNota("Nueva nota 3: ");
    notas[index].porc3 = LeerNota("Porcentaje de la nota 3: ");

    notas[index].nota4 = LeerNota("Nueva nota 4: ");
    notas[index].porc4 = LeerNota("Porcentaje de la nota 4: ");


    //validacion de la suma de porcentajes
    float sumaPorcentajes = notas[index].porc1 + notas[index].porc2 + notas[index].porc3 + notas[index].porc4;

    if (std::abs(sumaPorcentajes - 100.0f) > 0.01f) {
    std::cout <<"Error: los porcentajes no suman 100%. Por favor revise los valores. \n";
    return;

    }
    calcularNotaFinal(notas[index]);
    std::cout << "Notas actualizadas correctamente.\n";

}

void consultarNotasIndividual(const vector<Estudiante>& estudiantes, const vector<Notas>& notas){
    string codigo;
    cout << "\n--- Consultar notas individuales ---\n";
    cout << "Ingrese el codigo del estudiante: ";
    cin >> codigo;

    for (size_t i = 0; i < estudiantes.size(); i++) {
        if (estudiantes[i].codigo == codigo){
            cout << "Estudiante: " << estudiantes[i].nombre << "" << estudiantes[i].apellido << "\n";
            cout << "Nota 1: " << notas[i].nota1 << " ("<< notas[i].porc1 << "%)\n";
            cout << "Nota 2: " << notas[i].nota2 << " ("<< notas[i].porc2 << "%)\n";
            cout << "Nota 3: " << notas[i].nota3 << " ("<< notas[i].porc3 << "%)\n";
            cout << "Nota 4: " << notas[i].nota4 << " ("<< notas[i].porc4 << "%)\n";
            cout << "Nota final: " << notas[i].notaFinal << " (" << notas[i].porcFinal << "%)\n";
                return;
        }

    }

        cout << "Estudiante no encontrado \n";

}

void calcularNotaFinal(Notas& nota) {
    nota.notaFinal = (nota.nota1 * nota.porc1 + nota.nota2 * nota.porc2+ nota.nota3 * nota.porc3 + nota.nota4 * nota.porc4) / 100.0;
    nota.porcFinal = 100.0; //se asume que el porcentaje final sera siempre el 100%



}