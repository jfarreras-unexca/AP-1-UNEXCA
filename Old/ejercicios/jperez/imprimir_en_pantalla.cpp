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
void crecimientoanual();



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
acumulacionPA();

    return 0;
}

/*=======================================================
// FUNCIONES //
//=======================================================*/
//------------------------------------------
//funcion coloca aqui tus funciones si colocaste los prototipos las funciones deben ir despues de la funcion main


void encabezado(){

cout    << "| POLBACION DE A |"
        << " POBLACION DE B |"
        << " ANNO |"
        << " % DE CRECIMIENTO A |"
        << " % DE CRECIMIENTO B |"
        << " POB. ACT. A |"
        << " POB. ACT. B |" << endl;

}

void acumulacionPA(){


cout << "INGRESE LA CANTIDAD DE REPETICIONES: "; cin >> repeticiones;
limpiarconsola();
encabezado();


for (int i = 1; i < repeticiones; ++i)
{


APAA += (APAA * PorA / 100);

APAB += (APAB * PorB / 100);

cout    << PA
        << "            "
        << PB
        << endl;

cout    

        << " " 
        << APAA
        << "            "
        << APAB
        << "            "
        << " " 
        << 1968 + i
        << endl;

}



}

//----------------------------------
// Bloque de instrucciones
//----------------------------------
// funcion crea un numero aleatorio
