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

int cont1=0;
int numero=0;
int numero1=0;
int num=0;


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
double NroAleatorio(int num);

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


double NroAleatorio(int num)   //definición de la función
{
// VARIABLES lOCALES
//------------------------------------------------------
//esta funcion genera numeros aleatorios entre 1 y 100
// si desea aumentar o disminuir el rango de numeros que se generan
//cambia la el valor de la variable numero
        cont1=0;
        // cambia en la linea siguiente el valor de la variable numero
        // ahora esta en 100 para aumentar el rango de numero aleatorios cambiala
        //consejo dejala asi por ahora.
        numero=20;
        numero=(numero);
        numero1=(numero+1);
        // Genera numero aleatorio entre 1 y numero
        num = 1 + rand() % (numero1 - 1);
        //cout << num << " " <<endl;
    return num;
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
    enunciado();
    vector <double> decimales; // Vector para guardar los numeros con decimales
    double numeror;

    cout << "INGRESE 10 NUMEROS REALES: ";


    /* Ciclo para leer los 10 numeros ingresados */

    for (int i = 0; i < 10; ++i){
        limpiarconsola();
        enunciado();
        srand(time(NULL));// llama al generador de numero aleatorios el cual le entrega 1 valor a la vez.
        cout << "Numero " << i + 1 << ": "; //Mostrar en pantalla los numeros
        numeror=NroAleatorio(num); // Lectura de numero ingresado

        // Separar los numeros en una parte entera y una decimal usando "modf"
        double pentera; //Variable para almacenar los enteros
        double pdecimal = modf (numeror, &pentera); // separacion parte decimal y entera


        // Validar que la parte decimal no es igual a 0
        if (fabs(pdecimal) > 1e-10) { //fabs para declarar valores abosolutos, 
            decimales.push_back(numeror);
        }
    }

    // mostrar todos los numeros decimales existentes
    if (!decimales.empty()) { //Validacion de que el vector no este vacio 
        cout << "Numeros con decimales: ";
        for (double n : decimales) {
            cout << n << " "; // Recorrer e imprimir cada numero con decimales
        }
        cout << endl;
    } else {

        //Mostrar cuando no existen decimales
        cout << "NINGUN NUMERO ES DECIMAL";
    }

}


