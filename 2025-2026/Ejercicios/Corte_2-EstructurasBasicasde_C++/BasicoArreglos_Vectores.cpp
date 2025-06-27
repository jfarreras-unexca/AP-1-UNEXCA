/*-------------------------------------------------
Fecha: 2022/04/20
Catedra: Programacion I
NombredelPrograma: BasicoArreglos
Lenguaje de Programacion: C++
Programador: BPPD
Cedula:
Descripcion del Programa: (colocoa aqui el enumciado del ejercicio de la guia)
 Crea un vector de 4 posiciones y  buscar cual es el menor.

Comentarios:
*/


// LIBRERIAS o Directivas del preprocesador
#include <stdlib.h>
#include <iostream>

//EJEMPLO
/*#include <stdlib.h>
#include <math.h>
#include <string>
//#include <windows.h>
#include <time.h>*/


using namespace std;
/*======================================================
// VARIABLES GLOBALES
//======================================================*/

//EJEMPLO
//int cont1=0;
//int Nota=0;
//int Nota1=0;
//int num=0;

int vector1[4];  // defino un vector o arreglo de 4 posiciones de tipo numerico entero
float vector2[25]; // defino un vector o arreglo de 25 posiciones de tipo numerico Flotante
string vector3[500]; // defino un vector o arreglo de 500 posiciones de tipo alfanumerico
bool vector4[10]; // defino un vector o arreglo de 10 posiciones de tipo booleano variable logicas
char vector5[2]; // defino un vector o arreglo de 2 posiciones de tipo char

int edad[] = {18,20,90,18,16,32,50,36,20,10,8}; // otra forma de declarar un vector o arreglo


int edades[5]; // Declarar un vector o arreglo, el que uso para el ejercicios.


/*=======================================================
// PROTOTIPOS //
//=======================================================*/


//------------------------------------------
//coloca aqui Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main



/*=======================================================
// FUNCIONES //
//=======================================================*/


//------------------------------------------
//funcion coloca aqui tus funciones o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main



//======================================================
// FUNCION PRINCIPAL
//======================================================

main()
{
    // el siguiente bloque de codigo carga informacion en el vector
    int i=0;
    int Sw1=0;
    int Xl_EdadMayor=0;
    int Xl_MenorEdad=0;

    for (int i = 0; i <= 5; i++)
    {
            cout << "Ingresa la edad del Alumno " <<" --> ";
            cin >> edades[i];
    }

    // el siguiente bloque de codigo muestra la informacion que cargue en el vector

    cout << "\n\n\n\n\n"; // Bajo 5 lineas

    i=0;
    for (int i = 0; i <= 5; i++)
    {
            cout << "Valor cargado en la Posicion Nro " << i << " del Vector" <<" --> " <<  edades[i] << endl;
    }

    // el siguiente bloque de codigo muestra la mayor edad.
    i=0;
    for (int i = 0; i <= 5; i++)
    {
        if (Sw1 == 0)
        {
            Sw1=1;
            Xl_EdadMayor=edades[i];
            Xl_MenorEdad=edades[i];
         }

        if(edades[i] > Xl_EdadMayor)
        {
            Xl_EdadMayor = edades[i];
        }

        if(edades[i] < Xl_MenorEdad)
        {
             Xl_MenorEdad = edades[i];
        }
    }

    // imprime la edad mayor y menor
	cout << "  \n";
    cout << "  \n";
	cout << " La edad Mayor es --> " <<  Xl_EdadMayor  << "  \n";
	cout << " La edad Menor es --> " <<  Xl_MenorEdad << "  \n";

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













