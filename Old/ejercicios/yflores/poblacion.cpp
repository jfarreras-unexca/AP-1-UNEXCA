#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <ostream>
#include <iomanip>


using namespace std;

/* VARIABLES */

int repeticiones = 0;
int PA = 100; // poblacion de A
int PB = 50; // poblacion de B
int PorA = 4; //crecimiento de A
int PorB = 12; // crecimiento de poblacion B
int PAA = (PA + PA * PorA/100);
int PAB = (PB + PB * PorB/100);
int Apaa = (PAA + PAA*PorA/100); // acumulador de crecimiento de poblacion de A
int Apab = (PAB + PAB*PorB/100); // acumulador de crecimiento de poblacion de B

// FUNCIONES // 

void encabezado ();






// FUNCION PRINCIPAL //

int main(){

encabezado();



return 0;
}



// DESARROLLO DE FUNCIONES //




void encabezado (){

system ("clear");
	cout <<  "Poblacion de A";
	cout <<  "Poblacion de B";
	cout <<  "ANNO";
	cout << " %Poblacion de A";
	cout << " %Poblacion de B";
	cout << " Poblacion Actual de A";
	cout << " Poblacion Actual de B" << endl;


}

