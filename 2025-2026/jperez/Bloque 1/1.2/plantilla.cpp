/*-------------------------------------------------
Fecha:
Catedra: APT
NombredelPrograma:
Lenguaje de Programacion: c++
Programador: Jose Angel Perez Farreras
Cedula: 26.783.686
Descripcion del Programa:
(coloco aqui el enumciado del ejercicio de la guia)

Calcular el nuevo salario de un trabajador si obtuvo un incremento del 25% sobre su
salario anterior.

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


using namespace std;
/*======================================================
// VARIABLES GLOBALES
//======================================================*/

//======================================================
//int cont1=0;
//int numero=0;
//int numero1=0;
//int num=0;
int salario_base = 0;
int incremento = 0.25;
int salario_final = 0;



/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------
/*coloca aqui Los prototipos si colocas
 los prototipos las funciones deben
 ir despues de la funcion main


*/
void encabezado ()
{

    #ifdef _WIN32
        system("cls"); /* WINDOWS */
    #else
        std::system("clear"); /* LINUX */
    #endif

    cout << "\n" << endl;                                                               // "\n" funciona para agregar una linea en blanco
    cout << "Universidad Nacional Experimental de la Gran Caracas            " << endl; // "endl" funciona para insertar los caracteres en las siguiente linea
    cout << "Sede: La Floresta                                               " << endl;
    cout << "Turno: Nocturno                                                 " << endl;
    cout << "Seccion: Viernes                                                " << endl;
    cout << "Horario: 5:00 pm a 7:00 pm                                      " << endl;
    cout << "\n" << endl;
}


/*=======================================================
// FUNCIONES //
//=======================================================*/

void encabezado(); //Funcion para limpiar la pantalla y llamar al encabezado


//------------------------------------------
//funcion coloca aqui tus funciones
//o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main







//======================================================
// FUNCION PRINCIPAL
//======================================================

main()
{
    encabezado();

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















