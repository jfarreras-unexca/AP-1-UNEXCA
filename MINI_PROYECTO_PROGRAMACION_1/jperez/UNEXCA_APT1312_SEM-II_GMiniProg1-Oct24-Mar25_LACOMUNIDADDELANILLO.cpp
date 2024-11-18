/*-------------------------------------------------
Fecha: 17/11/2024
Catedra: APT1312_SEM-II
NombredelPrograma: menuInicial
Lenguaje de Programacion: c++
Programador: Sublime Text / CodeBlock
Cedula      Apellidos           Nombres
26783686    PEREZ FARRERAS      JOSE ANGEL
26271246	FLORES DIAZ         YANETSI RAYMAR
20838229	Martínez Martinez   Leoner Jesus
30598261	Pacheco Yanez       Darwin Jahir Alejandro
30481008	González Guzmán     Socrates Leandro
Descripcion del Programa:
Menu Inicial Mini Proyecto de Programacion 1
seccion: 30311 5 a 7

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

/*======================================================
//
// FUNCIONES DE PANTALLAS
//
//======================================================*/


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
/* La funcion "void" no devuelve ningun resultado de retorno */
void enunciado(); /* Llamada para mostrar en pantalla el enunciado */ /* Funcion del enunciado */
void menuPrincipal();  /* Funcion del menu principal */
void subMenuIncluir ();  /* Funcion del Menu Incluir */
void subOpcionIncluir();  /* Funcion para respuesta a opciones en mantenimiento */
void subMenuModificar ();  /* Funcion del Menu Modificar*/
void subOpcionModificar(); /* Funcion para respuesta a opciones en mantenimiento */
void subMenuEliminar(); /* Funcion del Menu Eliminar */
void subOpcionEliminar(); /* Funcion para respuesta a opciones en mantenimiento */
void subMenuInformes(); /* Funcion del Menu Informes */
void subOpcionInformes(); /* Funcion para respuesta a opciones en mantenimiento */


//======================================================
// FUNCION PRINCIPAL
//======================================================

main() /*Funcion Principal*/
{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
menuPrincipal();
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

void enunciado()  /* Ejecucion de Funcion enunciado */


{
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    cout << "                                                                " << endl; /* "endl" funciona para insertar los caracteres en las siguiente linea */
    cout << "Universidad Nacional Experimental de la Gran Caracas            " << endl;
    cout << "Sede: La Floresta                                               " << endl;
    cout << "Turno: Nocturno                                                 " << endl;
    cout << "Seccion: 30311                                                  " << endl;
    cout << "Horario: 5:00 pm a 7:00 pm                                      " << endl;
    cout << "                                                                " << endl;
}

void menuPrincipal ()  /* Ejecucion de Funcion menuPrincipal */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcionMenu;

        do {
        cout << "                         MENU PRINCIPAL                         " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "1.- INCLUIR.                                                    " << endl;
        cout << "2.- MODIFICAR.                                                  " << endl;
        cout << "3.- ELIMINAR.                                                   " << endl;
        cout << "4.- INFORMES.                                                   " << endl;
        cout << "0.- SALIDA.                                                     " << endl;
        cout << " INGRESE UNA OPCION Y PRESIONE ENTER: " ;cin >> opcionMenu;

switch(opcionMenu){
        case 1:
            system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
            enunciado(); /* Llamada para mostrar en pantalla el enunciado */
            subMenuIncluir();
            break;

        case 2:
            system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
            enunciado(); /* Llamada para mostrar en pantalla el enunciado */
            subMenuModificar();
            break;

        case 3:
            system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
            enunciado(); /* Llamada para mostrar en pantalla el enunciado */
            subMenuEliminar();
            break;

        case 4:

            break;

        case 0:
            exit(0);

            break;
    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;

}


} while (opcionMenu != 0);
}


void subMenuIncluir ()  /* Ejecucion de Funcion subMenuIncluir */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

    do{
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "                         MENU INCLUIR                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- PROCENTAJE DE EVALUACION.                                   " << endl;
    cout << "3.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
    cout << " INGRESE UNA OPCION Y PRESIONE ENTER: " ;cin >> opcion;
    switch(opcion)
    {
    case 1:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionIncluir();

    break;

    case 2:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionIncluir();
    break;

    case 3:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionIncluir();
    break;

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    break;

    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;

    }

    }while (opcion != 0);
}

void subOpcionIncluir()  /* Ejecucion de Funcion subOpcionIncluir */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

do{
    cout << "                        MENU INCLUIR                            " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
    cin >> opcion;

    switch(opcion){

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "REGRESANDO AL MENU ANTERIOR" << endl;
    break;
    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;
    }


    }while (opcion != 0);
}


void subMenuModificar ()  /* Ejecucion de Funcion subMenuModificar */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

    do{
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "                        MENU MODIFICAR                          " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- PROCENTAJE DE EVALUACION.                                   " << endl;
    cout << "3.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
    cout << " INGRESE UNA OPCION Y PRESIONE ENTER: " ;cin >> opcion;
    switch(opcion)
    {
    case 1:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionModificar();

    break;

    case 2:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionModificar();
    break;

    case 3:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionModificar();
    break;

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    break;

    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;

    }

    }while (opcion != 0);
}

void subOpcionModificar()  /* Ejecucion de Funcion subOpcionModificar */



{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

do{
    cout << "                        MENU MODIFICAR                          " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
    cin >> opcion;

    switch(opcion){

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "REGRESANDO AL MENU ANTERIOR" << endl;
    break;
    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;
    }


    }while (opcion != 0);
}

void subMenuEliminar()  /* Ejecucion de Funcion subMenuEliminar */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

    do{
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "                        MENU ELIMINAR                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
    cout << " INGRESE UNA OPCION Y PRESIONE ENTER: " ;cin >> opcion;

    switch(opcion)
    {
    case 1:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionEliminar();

    break;

    case 2:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionEliminar();
    break;

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    break;

    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;

    }

    }while (opcion != 0);
}

void subOpcionEliminar()  /* Ejecucion de Funcion subOpcionEliminar */


{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

do{
    cout << "                        MENU ELIMINAR                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
    cin >> opcion;

    switch(opcion){

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "REGRESANDO AL MENU ANTERIOR" << endl;
    break;
    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;
    }


    }while (opcion != 0);
}


void subMenuInformes()  /* Ejecucion de Funcion subMenuInformes */



{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

    do{
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "                        MENU INFORMES                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNOS (LISTA DE CLASE).                                   " << endl;
    cout << "2.- ACTA DE NOTAS.                                              " << endl;
    cout << "3.- NOTAS DE UN ALUMNO.                                         " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
    cout << " INGRESE UNA OPCION Y PRESIONE ENTER: " ;cin >> opcion;
    switch(opcion)
    {
    case 1:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionInformes();

    break;

    case 2:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionInformes();
    break;

    case 3:
        system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
        enunciado(); /* Llamada para mostrar en pantalla el enunciado */
        subOpcionInformes();
    break;

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    break;

    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;

    }

    }while (opcion != 0);
}



void subOpcionInformes()  /* Ejecucion de Funcion subOpcionInformes */



{
system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
enunciado(); /* Llamada para mostrar en pantalla el enunciado */
int opcion;

do{
    cout << "                        MENU INFORMES                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
    cin >> opcion;

    switch(opcion){

    case 0:
    system("cls"); /*-Funcion para limpiar la pantalla con la terminal del sistema operativo */
    enunciado(); /* Llamada para mostrar en pantalla el enunciado */
    cout << "REGRESANDO AL MENU ANTERIOR" << endl;
    break;
    default:
    cout << "OPCION INVALIDA, INGRESE NUEVAMENTE UNA OPCION" << endl;
    }


    }while (opcion != 0);
}


