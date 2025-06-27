#include <iostream>
#include <vector>

using namespace std;

// Función para sumar dos matrices
vector<vector<int>> sumaMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas = matriz1.size();
    int columnas = matriz1[0].size();
    vector<vector<int>> resultado(filas, vector<int>(columnas));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return resultado;
}

// Función para mostrar una matriz
void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main() {
    // Definir dos matrices de ejemplo
    vector<vector<int>> matriz1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> matriz2 = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Sumar las matrices
    vector<vector<int>> resultado = sumaMatrices(matriz1, matriz2);

    // Mostrar las matrices y el resultado
    cout << "Matriz 1:" << endl;
    mostrarMatriz(matriz1);

    cout << "Matriz 2:" << endl;
    mostrarMatriz(matriz2);

    cout << "Resultado de la suma:" << endl;
    mostrarMatriz(resultado);

return 0;
}