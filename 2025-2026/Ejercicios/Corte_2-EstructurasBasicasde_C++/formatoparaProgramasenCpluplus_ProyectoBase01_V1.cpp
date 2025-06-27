/*-------------------------------------------------
Fecha:
Catedra:
NombredelPrograma:
Lenguaje de Programacion:
Programador:
Cedula:
Descripcion del Programa: (colocoa aqui el enumciado del ejercicio de la guia)


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
#include <string>

using namespace std;
/*======================================================
// VARIABLES GLOBALES
//======================================================*/

//======================================================
int cont1=0;
int numero=0;
int numero1=0;
int num=0;
int TipoSO=0; // 0=LINUX 1=WINDOWS
float pnp1, pnp2, pnp3, pnp4, def;
int opcion;
bool repetir=true;

struct NotasParciales
{
    int CodigoALu=0;
    float pnp1=0;
    float pnp2=0;
    float pnp3=0;
    float pnp4=0;
    float def=0;
};
struct  RegAlumno
{
    int CodigoAlu=0;
    int CedulaAlu=0;
    char ApellAlu[31];
    char NombreAlu[31];
    int Semestre=0;
    int CodiMateria=0;
};

/*=======================================================
// PROTOTIPOS //
//=======================================================*/
//------------------------------------------
//coloca aqui Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main

double NroAleatorio(int num);  //definicion de la funcion
int main_menu();
int TipoSistemaOperativo();
int Encabezado();
int Notas_menu();
int Alumnos_menu();

int IncluirNotasdeEstudiantes();
int EliminarNotasdeEstudiantes();
int ModificarNotasdeEstudiantes();
int ListarNotasdeEstudiantes();

int IncluirDatosdeEstudiantes();
int EliminarDatosdeEstudiantes();
int ModificarDatosdeEstudiantes();
int ListarDatosdeEstudiantes();

float ingresar_notas();
int Modificar_datos();
int Modificar_notas();
float Mostrar_notas();
float Mostrar_acta();
/*=======================================================
// FUNCIONES //
//=======================================================*/
//------------------------------------------
//funcion coloca aqui tus funciones o Los prototipos si colocas los prototipos las funciones deben ir despues de la funcion main



int MenuPrincipal(){
    int Xopc1=0;
	do {
    TipoSistemaOperativo();
    Encabezado();
        cout<<endl
			<<"		Menu de opciones\n" //MENU PRINCIPAL DEL PROGRAMA
			<<endl
			<<"	1. Ingresar datos de los estudiantes\n"
			<<"	2. Ingresar notas de los estudiantes\n"
			<<"	3. Modificar datos de un estudiante\n"
			<<"	4. Modificar una nota de un estudiante\n"
			<<"	5. Mostrar notas de un estudiante\n"
			<<"	6. Mostrar acta de notas\n"
			<<"	7. Salir\n"
			<<endl
			<<"Por favor ingrese el numero de la opcion deseada: ";
		cin>>opcion;

		switch(opcion)		{
			case 1:
				Alumnos_menu();
				break;

			case 2:
				ingresar_notas();
				break;

			case 3:
				Modificar_datos();
				break;

			case 4:
				Modificar_notas();
				break;

			case 5:
				Mostrar_notas();
				system("pause");
				break;

			case 6:
				Mostrar_acta();
				system("pause");
				break;

			case 7:
				repetir=false;
		}

	} while(repetir);
//-------------------------


	return 0;
}


//======================================================
// FUNCION PRINCIPAL
//======================================================

main()
{
    main_menu();
    	//MenuPrincipal();
//IngresarDatosEstudiantes();

/*
    srand(time(NULL));// llama al generador de numero aleatorios el cual le entrega 1 valor a la vez.

    num=NroAleatorio(num); // llama a la funcion de numero aleatorios y
				  //le pide un valor entre 1 y el valor de la variable Numero y guarda enla variable num;

	cout << "Numero Aleatorio--> " << num << "\n"; // Muestra el valor de la variable num
	 //system("pause");
*/
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

/*-----------------------------------------------------*/
// funcion crea Menu principal de programa.

int main_menu(){
    int Xopc1 = 0;
	do {
TipoSistemaOperativo();
    Encabezado();
        cout<<endl
			<<"		Menu de opciones\n" //MENU PRINCIPAL DEL PROGRAMA
			<<endl
			<<"	1. Estudiantes\n"
			<<"	2. Notas\n"
			<<"	3. Materias\n"
			<<"	4. Informes\n"
			<<"	99. Salir\n"
			<<endl
			<<"Por favor ingrese el numero de la opcion deseada: ";
		cin>>opcion;

		switch(opcion)		{
			case 1:
				Alumnos_menu();
				//IngresarDatosEstudiantes();
				break;

			case 2:
				Notas_menu();
				break;

			case 3:
				Modificar_datos();
				break;

			case 4:
				Modificar_notas();
				break;

        /*  case 5:
				Mostrar_notas();
				system("pause");
				break;

			case 6:
				Mostrar_acta();
				system("pause");
				break;
        */
			case 99:
				Xopc1 = 99;
				break;
		}

	} while(Xopc1 !=99);
	return 0;
}

//-------------------------------
int Notas_menu(){
    int Xopc1 = 0;
	do {
        TipoSistemaOperativo();
        Encabezado();
        cout<<endl
			<<"		Menu de Notas\n" //MENU PRINCIPAL DEL PROGRAMA
			<<endl
			<<"	1. Incluir Notas de Estudiantes\n"
			<<"	2. Modificar Notas de Estudiantes\n"
			<<"	3. Eliminar Notas de un Estudiante\n"
			<<"	4. Lista de Notas de Estudiantes\n"
			<<"	9. Salir\n"
			<<endl
			<<"Por favor ingrese el numero de la opcion deseada: ";
		cin>>opcion;

		switch(opcion)		{
			case 1:
				IncluirNotasdeEstudiantes();
				break;

			case 2:
				ModificarNotasdeEstudiantes();
				break;

			case 3:
				EliminarNotasdeEstudiantes();
				break;

			case 4:
				Modificar_notas();
				break;

        /*  case 5:
				NotasdeEstudiantes();
				system("pause");
				break;

			case 6:
				NotasdeEstudiantes();
				system("pause");
				break;
        */
			case 9:
				Xopc1 = 9;
				break;
		}

	} while(Xopc1 !=9);
	return 0;
}

/*-----------------------------------------------------*/
//

int Alumnos_menu(){
    int Xopc1 = 0;
	do {
        TipoSistemaOperativo();
        Encabezado();
        cout<<endl
			<<"		Menu de Alumnos\n" //MENU PRINCIPAL DE ALUMNOS
			<<endl
			<<"	1. Incluir Datos de Estudiantes\n"
			<<"	2. Modificar Datos de Estudiantes\n"
			<<"	3. Eliminar Datos de un Estudiante\n"
			<<"	4. Lista Datos de Estudiantes\n"
			<<"	9. Salir\n"
			<<endl
			<<"Por favor ingrese el numero de la opcion deseada: ";
		cin>>opcion;

		switch(opcion)		{
			case 1:
				IncluirDatosdeEstudiantes();
				break;

			case 2:
				ModificarDatosdeEstudiantes();
				break;

			case 3:
				EliminarDatosdeEstudiantes();
				break;

			case 4:
				ListarNotasdeEstudiantes();
				break;

        /*  case 5:
				NotasdeEstudiantes();
				system("pause");
				break;

			case 6:
				NotasdeEstudiantes();
				system("pause");
				break;
        */
			case 9:
				Xopc1 = 9;
				break;
		}

	} while(Xopc1 !=9);
	return 0;
}

/*-----------------------------------------------------*/
//


/*-----------------------------------------------------*/
// funcion crea
int TipoSistemaOperativo()
{
        if(TipoSO == 0)
            {system("clear");}
        else
            {system("clear");}
    return(0);
}


float ModuloEnMantenimiento(){
		int x=0;
			TipoSistemaOperativo();
        do{
            cout<<endl
            <<"	                                          \n"
            <<"	                                          \n"
            <<"	MODULO EN MANTENIMIENTO o CONSTRUCCION    \n"
            <<"	CATEDRA: algoritmica y Programacion       \n\n"
            <<endl;

            cout << "PRESIONE 9 PARA VOLVER AL MENU";
            cin >> x;
        }while(x != 9);
}
/*-----------------------------------------------------*/
// funcion crea
int Encabezado()
{
	cout<<endl
		<<"	UNIVERSIDAD NACIONAL EXPERIMENTAL DE CARACAS\n"
		<<"	SEDE: Caracas\n"
		<<"	CARRERA: Ingenieria Informaticaen Sistemas\n"
		<<"	CATEDRA: algoritmica y Programacion\n\n"
		<<endl;
}
/*-----------------------------------------------------*/
int IncluirNotasdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int ModificarNotasdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int EliminarNotasdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int ListarNotasdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/

/*-----------------------------------------------------*/
int IncluirDatosdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int ModificarDatosdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int EliminarDatosdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/
int ListarDatosdeEstudiantes()
{
    ModuloEnMantenimiento();
}

/*-----------------------------------------------------*/

/*-----------------------------------------------------*/
/*-----------------------------------------------------*/
/*-----------------------------------------------------*/
/*-----------------------------------------------------*/
/*-----------------------------------------------------*/

// funcion crea
int IngresarDatosEstudiantes()
{//MATRIZ PARA INGRESAR LOS DATOS DE LOS ESTUDIANTES.
    TipoSistemaOperativo();
    Encabezado();
    ModuloEnMantenimiento();
 	return 0;
}

/*-----------------------------------------------------*/
// funcion crea
float ingresar_notas(){//MATRIZ PARA INGRESAR LAS NOTAS DE LOS ESTUDIANTES.
    int x=0;
    TipoSistemaOperativo();
	Encabezado();
    ModuloEnMantenimiento();

	return 0;
}


/*-----------------------------------------------------*/
// funcion crea
int Modificar_datos()
{
    int x=0;
    TipoSistemaOperativo();
			Encabezado();
            ModuloEnMantenimiento();

		return (0);
	}

/*-----------------------------------------------------*/
// funcion crea
//FUNCION PARA LA MODIFICACION DE DATOS TENDRA QUE CONOCER LA UBICACION EXACTA DEL DATO A MODIFICAR.
int Modificar_notas(){
    int x=0;
    TipoSistemaOperativo();
			Encabezado();
            ModuloEnMantenimiento();
		return 0;
}


/*-----------------------------------------------------*/
// funcion crea
//FUNCION PARA LA MODIFICACION DE NOTAS, TENDRA QUE CONOCER LA UBICACION EXACTA DE LA NOTA A MODIFICAR.
float Mostrar_notas(){
    int x=0;
    TipoSistemaOperativo();
			Encabezado();
            ModuloEnMantenimiento();
	return 0;
}


/*-----------------------------------------------------*/
// funcion crea
//MUESTRA UN ACTA CON LOS DATOS Y NOTAS CARGADAS.
float Mostrar_acta(){
    int x=0;
    TipoSistemaOperativo();
			Encabezado();
            ModuloEnMantenimiento();
	return 0;
}


/*-----------------------------------------------------*/
// funcion crea un numero aleatorio
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
        numero=100;
        numero=round(numero);
        numero1=round(numero+1);
        // Genera numero aleatorio entre 1 y numero
        num = 1 + rand() % (numero1 - 1);
        //cout << num << " " <<endl;
	return num;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
