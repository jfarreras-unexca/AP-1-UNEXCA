/*#include <iostream>
#include <vector>

using namespace std;

int main() {

	int matriz1[3][3];

	for ( int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
		matriz1[i][j] = i * j;
	}
}

for ( int i = 0; i < 3; i++) {
	
	for (int j = 0; j < 3; j++) {
		cout << matriz1[i][j] " ";
	}
	cout << " " << endl;

 }

	return 0;
} */

#include <iostream>
using namespace std;

int main() {
    // Definir una matriz de 3 filas y 4 columnas
    int matriz[3][3];

    // Inicializar la matriz con valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * j;
        }
    }

    // Mostrar los valores de la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
