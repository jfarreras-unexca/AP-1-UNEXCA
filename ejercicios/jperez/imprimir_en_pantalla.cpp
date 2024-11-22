/*-------------------------------------------------
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
#include <ostream>
#include <iomanip>



using namespace std;
/*======================================================
// VARIABLES GLOBALES
//======================================================*/


//======================================================


int repeticiones = 0;
int PA = 100; /* Poblacion de A */
int PB = 50; /* Poblacion de B */
int PorA = 4; /* Crecimiento de Poblacion de A */
int PorB = 12; /* Crecimiento de Poblacion de B */
int PAA = (PA + PA*PorA/100); /* Poblacion Actual de A */
int PAB = (PB + PB*PorB/100); /* Poblacion Actual de B */
int APAA = (PAA + PAA*PorA/100); /* Acumulador de crecimiento poblacional de A */
int APAB = (PAB + PAB*PorB/100); /* Acumulador de crecimiento poblacional de B */

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
void encabezado();
void acumulacionPA();


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
encabezado();



cout << "ACTUALIZACION DE POBLACION ACTUAL DE A: " << APAA << endl; 

    return 0;
}

/*=======================================================
// FUNCIONES //
//=======================================================*/
//------------------------------------------
//funcion coloca aqui tus funciones si colocaste los prototipos las funciones deben ir despues de la funcion main


void encabezado(){

cout    << "|POLBACION DE A |"
        << "|POBLACION DE B |"
        << "|ANNO |"
        << "|% DE CRECIMIENTO A |"
        << "|% DE CRECIMIENTO B |"
        << "|POB. ACT. A |"
        << "|POB. ACT. B |" << endl;


}


//----------------------------------
// Bloque de instrucciones
//----------------------------------
// funcion crea un numero aleatorio
