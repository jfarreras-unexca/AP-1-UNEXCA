// Ejemplo basico de ciclo while
#include "iostream"

using namespace std;
int main()
{
    int xnumero;
    int i = 1;
    int xresultado = 0;

    cout <<  "Ingrese un numero entre 1 y 10 ";
    cin >> xnumero;

    while( i <= 10)
    {
        xresultado = xnumero * i;
        cout <<  xnumero << " * " << i << " = " << xresultado << endl;
         i++;
    }
    system("PAUSE");
    return 0;
}
