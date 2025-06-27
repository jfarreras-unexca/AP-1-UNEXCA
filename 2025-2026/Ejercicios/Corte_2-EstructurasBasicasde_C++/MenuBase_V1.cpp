/*-------------------------------------------------
Fecha:
Catedra:
NombredelPrograma:
Lenguaje de Programacion:
Programador:
Cedula:
Descripcion del Programa: (colocoa aqui el enumciado del ejercicio de la guia)
 Crea un vector de 4 posiciones y  buscar cual es el menor.

Comentarios:
*/


// LIBRERIAS o Directivas del preprocesador
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>

//EJEMPLO
//#include <stdlib.h>


using namespace std;

/*======================================================
// VARIABLES GLOBALES
//======================================================*/

//EJEMPLO
//int cont1=0;





/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------
//coloca aqui Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main

void encabezado();


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
 // VARIABLES GLOBALES
 int opcion;
 int xopc11;
    do {
        system("clear");
        encabezado();
        cout << "\n\n";
        cout << "                    SISTEMA DE NOTAS              ";
        cout << "\n\n";
		cout << "           1- Cargar datos de alumnos: " << endl;
		cout << "           2- Modificar datos del alumno: " << endl;
		cout << "           3- Cargar notas de parciales: " << endl;
		cout << "           4- Modificar notas del alumno: " <<endl;
		cout << "           5- Consultar alumnos: " <<endl;
		cout << "           6- Acta de notas: " <<endl;
		cout << "           0- SALIDA: " <<endl;
		cout << "\n Seleccione un opcion y pulse enter: ";cin >> opcion;
		switch(opcion){
			case 1:
                system("clear");

                break;
			case 2:
                system("clear");



                break;
			case 3:
                system("clear");

                break;
			case 4:
                system("clear");

                break;
			case 5:
                system("clear");

                break;
			case 6:
                system("clear");


                break;
			case 0:	exit(0);
                break;
			default: cout<<"Opcion Invalida PRESIONE CERO PARA CONTINUAR";
			cin >> xopc11;
            system("clear");
            encabezado();
			break;
        }
} while (opcion != 0);
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


void encabezado()
{
	//muestro en pantalla el encabezado
	system ("clear");
	cout << "   UNIVERSIDAD NACIONAL EXPERIMENTAL DE LAS FUERZAS ARMADAS UNEFA " << endl;
	cout << "   Sede: Chuao " << endl;
	cout << "   Catedra: Programacion II" << endl;
	//cout << "   Turno: Nocturno" << endl;
	//cout << "   Seccion: " << endl;
	//cout << "   Horario:" << endl << endl;
}

//-----------------------------------------------/












