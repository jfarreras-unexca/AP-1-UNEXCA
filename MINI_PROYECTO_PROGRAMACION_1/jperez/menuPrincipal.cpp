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




//======================================================


/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------


void enunciado(); /* llamada del enunciado*/

void menuPrincipal ();

/*coloca aqui Los prototipos si colocas
 los prototipos las funciones deben
 ir despues de la funcion main



*/
/*=======================================================
// FUNCIONES //
//=======================================================*/







//------------------------------------------
//funcion coloca aqui tus funciones
//o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main







//======================================================
// FUNCION PRINCIPAL
//======================================================

main()
{

int opcionmenuPrincipal = 0;

        do {

    enunciado();    /* funcion para invocar enunciado */
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

    menuPrincipal();    /* llamada del menu principal */
                        /* funciones del menuPrincipal */

    cout << "                                                                " << endl;
    cout << "                         MENU PRINCIPAL                         " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- INCLUIR.                                                    " << endl;
    cout << "2.- MODIFICAR.                                                  " << endl;
    cout << "3.- ELIMINAR.                                                   " << endl;
    cout << "4.- INFORMES.                                                   " << endl;
    cout << "0.- SALIDA.                                                     " << endl;


    cout << " Ingrese una Opcion y Pulse Enter: " << endl;
    cin >> opcionmenuPrincipal;

    switch(opcionmenuPrincipal) {

        case 1:
            system("cls");

            break;
        case 2:
            system("cls");

            break;
        case 3:
            system("cls");

            break;
        case 4:
            system("cls");

            break;
        case 0:
            exit(0);

            break;
}

} while (opcionmenuPrincipal != 0);
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