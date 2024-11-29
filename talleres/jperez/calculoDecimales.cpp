/*-------------------------------------------------

Dados 10 numeros reales, determine Cuales tienen decimales

Fecha:
Catedra:
NombredelPrograma:
Lenguaje de Programacion:
Programador:
Cedula:
Descripcion del Programa:
(coloco aqui el enumciado del ejercicio de la guia)

Comentarios:
*/




// LIBRERIAS o Directivas del preprocesador
//EJEMPLO
/*#include <stdlib.h>
#include <math.h>
#include <string>
//#include <windows.h>
#include <time.h>*/


#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>


using namespace std;
/*======================================================
// VARIABLES GLOBALES
//======================================================*/


//======================================================



/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------
/*coloca aqui Los prototipos si colocas
 los prototipos las funciones deben
 ir despues de la funcion main




*/
/*=======================================================
// FUNCIONES //
//=======================================================*/

void limpiarconsola();
void numeroDecimal();
void enunciado();

//------------------------------------------
//funcion coloca aqui tus funciones
//o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main


void limpiarconsola() {
    #ifdef _WIN32
        system("cls"); /* WINDOWS */
    #else
        std::system("clear"); /* LINUX */
    #endif
}


//======================================================
// FUNCION PRINCIPAL
//======================================================


main()
{
    limpiarconsola();
    enunciado();
    numeroDecimal();
    return 0;
}
/*=======================================================
// FUNCIONES //
//=======================================================*/
//------------------------------------------
//funcion coloca aqui tus funciones si colocaste los prototipos las funciones deben ir despues de la funcion main



//----------------------------------
// Bloque de instrucciones
//----------------------------------
// funcion crea un numero aleatorio

void enunciado()  /* Ejecucion de Funcion enunciado */

{
    limpiarconsola();
    cout << "                                                                " << endl; /* "endl" funciona para insertar los caracteres en las siguiente linea */
    cout << "Universidad Nacional Experimental de la Gran Caracas            " << endl;
    cout << "Sede: La Floresta                                               " << endl;
    cout << "Turno: Nocturno                                                 " << endl;
    cout << "Seccion: 30311                                                  " << endl;
    cout << "Horario: 5:00 pm a 7:00 pm                                      " << endl;
    cout << "                                                                " << endl;
}


void numeroDecimal(){
    limpiarconsola();
    vector <double> decimales; // Vector para guardar los numeros con decimales
    double numero;

    cout << "INGRESE 10 NUMEROS REALES: ";


    /* Ciclo para leer los 10 numeros ingresados */

    for (int i = 0; i < 10; ++i){
        cout << "Numero " << i + 1 << ": "; //Mostrar en pantalla los numeros
        cin >> numero; // Lectura de numero ingresado


        double pentera; //Variable para almacenar los enteros
        double pdecimal = modf (numero, &pentera);


        if (fabs(pdecimal) > 1e-10) {
            decimales.push_back(numero);
        }
    }


    if (!decimales.empty()) {
        cout << "Numeros con decimales: ";
        for (double n : decimales) {
            cout << n << " ";
        }
        cout << endl;
    } else {

        cout << "NINGUN NUMERO ES DECIMAL";
    }

}


