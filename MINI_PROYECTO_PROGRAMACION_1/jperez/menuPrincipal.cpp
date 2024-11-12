/*-------------------------------------------------
Fecha:
Catedra:
NombredelPrograma:
Lenguaje de Programacion:
Programador:
Cedula:
Descripcion del Programa:
(coloco aqui el enunciado del ejercicio de la guia)


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

int opcionmenuPrincipal = 0;

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


void enunciado() {  /* funcion para invocar enunciado */
                    /* La funcion "void" no devuelve ningun resultado de retorno */


    cout << "                                                                " << endl; /* "endl" funciona para insertar los caracteres en las siguiente linea */
    cout << "Universidad Nacional Experimental de la Gran Caracas            " << endl;
    cout << "Sede: La Floresta                                               " << endl;
    cout << "Turno: Nocturno                                                 " << endl;
    cout << "Sección: 30311                                                  " << endl;
    cout << "Horario: 5:00 pm a 7:00 pm                                      " << endl;
    cout << "                                                                " << endl;
    cout << "     Se Compilo sin Errores       " << endl;
    cout << "**********************************" << endl;
}

void menuPrincipal (){ /* funciones del menuPrincipal */

    cout << "                                                                " << endl;
    cout << "                         MENU PRINCIPAL                         " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- INCLUIR.                                                    " << endl;
    cout << "2.- MODIFICAR.                                                  " << endl;
    cout << "3.- ELIMINAR.                                                   " << endl;
    cout << "4.- INFORMES.                                                   " << endl;
    cout << "0.- SALIDA.                                                     " << endl;


}




//------------------------------------------
//funcion coloca aqui tus funciones
//o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main







//======================================================
// FUNCION PRINCIPAL
//======================================================

main()
{

    enunciado(); /* llamada del enunciado*/
    menuPrincipal(); /* llamada del menu principal */

    cout << " Ingrese una Opcion y Pulse Enter: " << endl;
    cin >> opcionmenuPrincipal ;
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