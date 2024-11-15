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


int opcionIncluir = 0;
int opcionModificar = 0;
int opcionEliminar = 0;
int opcionInformes = 0;
int opcionsubmenu = 0;
//int opcionPrincipal = 0;
int opcionmenuPrincipal = 0;
//======================================================


/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------

/*======================================================
// PANTALLAS
//======================================================*/

void enunciado()   /* llamada del enunciado*/
                    /* funcion para invocar enunciado */
                    /* La funcion "void" no devuelve ningun resultado de retorno */
{
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

void menuPrincipal ()  /* llamada del menu principal */
                        /* funciones del menuPrincipal */

{
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

void subMenuIncluir ()  /* llamada del subMenuIncluir */
                        /* funciones del subMenuIncluir */

{
    cout << "                         MENU INCLUIR                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- PROCENTAJE DE EVALUACION.                                   " << endl;
    cout << "3.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
}

void subMenuModificar ()  /* llamada del subMenuModificar */
                          /* funciones del subMenuModificar */

{
    cout << "                        MENU MODIFICAR                          " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- PROCENTAJE DE EVALUACION.                                   " << endl;
    cout << "3.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
}

void subMenuEliminar () /* llamada del subMenuEliminar */
                        /* funciones del subMenuEliminar */

{
    cout << "                        MENU ELIMINAR                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNO.                                                     " << endl;
    cout << "2.- NOTA PARCIAL.                                               " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
}



void subMenuInformes () /* llamada del subMenuInformes */
                        /* funciones del subMenuInformes */

{
    cout << "                        MENU INFORMES                           " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "                                                                " << endl;
    cout << "1.- ALUMNOS (LISTA DE CLASE).                                   " << endl;
    cout << "2.- ACTA DE NOTAS.                                              " << endl;
    cout << "3.- NOTAS DE UN ALUMNO.                                         " << endl;
    cout << "0.- VOLVER.                                                     " << endl;
}


/*======================================================
//
// FUNCIONES DE PANTALLAS
//
//======================================================*/

void opcionMenuIncluir () /* llamada del opcionMenuIncluir */
                        /* funciones del opcionMenuIncluir */
{

int opcionMenuIncluir;

enunciado();
subMenuIncluir();

cout << " Ingrese una Opcion y Pulse Enter: " ;cin >> opcionIncluir;

    do{
    switch(opcionIncluir)
    {
    case 1:
        system("cls");
        enunciado();
        cout << "                        MENU INCLUIR                            " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 2:
        system("cls");
        enunciado();
        cout << "                        MENU INCLUIR                            " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 3:
        system("cls");
        enunciado();
        cout << "                        MENU INCLUIR                            " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 0:

    break;

    (opcionIncluir);
    }

    }while (opcionsubmenu != 0);
}


void opcionMenuModificar () /* llamada del opcionMenuModificar */
                        /* funciones del opcionMenuModificar */
{

int opcionMenuModificar;

enunciado();
subMenuModificar();

cout << " Ingrese una Opcion y Pulse Enter: " ;cin >> opcionModificar;

    do{
    switch(opcionModificar)
    {
    case 1:
        system("cls");
        enunciado();
        cout << "                        MENU MODIFICAR                          " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 2:
        system("cls");
        enunciado();
        cout << "                        MENU MODIFICAR                          " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 3:
        system("cls");
        enunciado();
        cout << "                        MENU MODIFICAR                          " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 0:

    break;

    (opcionIncluir);
    }

    }while (opcionsubmenu != 0);
}



void opcionMenuEliminar () /* llamada del opcionMenuEliminar */
                        /* funciones del opcionMenuEliminar */
{

int opcionMenuEliminar;

enunciado();
subMenuEliminar();

cout << " Ingrese una Opcion y Pulse Enter: " ;cin >> opcionEliminar;

    do{
    switch(opcionEliminar)
    {
    case 1:
        system("cls");
        enunciado();
        cout << "                        MENU ELIMINAR                           " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 2:
        system("cls");
        enunciado();
        cout << "                        MENU ELIMINAR                           " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 0:

    break;

    (opcionEliminar);
    }

    }while (opcionsubmenu != 0);
}


void opcionMenuInformes () /* llamada del opcionMenuEliminar */
                        /* funciones del opcionMenuEliminar */
{

int opcionMenuInformes;

enunciado();
subMenuInformes();

cout << " Ingrese una Opcion y Pulse Enter: " ;cin >> opcionInformes;

    do{
    switch(opcionInformes)
    {
    case 1:
        system("cls");
        enunciado();
        cout << "                        MENU INFORMES                           " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 2:
        system("cls");
        enunciado();
        cout << "                        MENU INFORMES                           " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 3:
        system("cls");
        enunciado();
        cout << "                        MENU INFORMES                           " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "                                                                " << endl;
        cout << "OPCION EN MANTENIMIENTO PRESIONE 0 PARA VOLVER AL MENU ANTERIOR:";
        cin >> opcionsubmenu;
    break;

    case 0:

    break;

    (opcionsubmenu);
    }

    }while (opcionsubmenu != 0);
}




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

int opcionIncluir = 0;
int opcionModificar = 0;
int opcionEliminar = 0;

enunciado();
menuPrincipal();

cout << " Ingrese una Opcion y Pulse Enter: " ;cin >> opcionmenuPrincipal;

        do {

 switch(opcionmenuPrincipal){

        case 1:
            system("cls");
            opcionMenuIncluir();

            break;

        case 2:
            system("cls");
            opcionMenuModificar();

            break;

        case 3:
            system("cls");
            opcionMenuEliminar();

            break;

        case 4:
            system("cls");
            opcionMenuInformes();

            break;

        case 0:
            exit(0);

            break;
        (opcionmenuPrincipal);
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
