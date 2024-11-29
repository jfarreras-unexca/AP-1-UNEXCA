#include <iostream>  // Biblioteca para entrada y salida
#include <vector>    // Biblioteca para usar el contenedor vector
#include <cmath>     // Biblioteca para funciones matemáticas, como modf

using namespace std;

// Función para determinar cuáles de los 10 números ingresados tienen decimales
void determinarDecimales() {
    vector<double> numerosConDecimales; // Vector para almacenar números con parte decimal
    double numero;                     // Variable para almacenar cada número ingresado

    cout << "Ingrese 10 números reales:\n";

    // Ciclo para leer 10 números reales ingresados por el usuario
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero; // Leer el número ingresado por el usuario

        // Separar el número en parte entera y decimal usando la función modf
        double parteEntera;                   // Variable para almacenar la parte entera
        double parteDecimal = modf(numero, &parteEntera); // Separar parte decimal y entera

        // Verificar si la parte decimal es diferente de cero (considerando precisión)
        if (fabs(parteDecimal) > 1e-10) {    // fabs: valor absoluto; 1e-10 para evitar errores de redondeo
            numerosConDecimales.push_back(numero); // Si tiene decimales, agregar al vector
        }
    }

    // Mostrar los números con decimales, si existen
    if (!numerosConDecimales.empty()) {  // Verificar si el vector no está vacío
        cout << "\nNúmeros con decimales:\n";
        for (double n : numerosConDecimales) { // Recorrer el vector
            cout << n << " ";                // Imprimir cada número con decimales
        }
        cout << endl;
    } else {
        // Mensaje si ninguno de los números tiene decimales
        cout << "\nNinguno de los números tiene decimales.\n";
    }
}

// Función principal
int main() {
    determinarDecimales(); // Llamar a la función para procesar los números
    return 0;              // Finalizar el programa
}
