// Ejemplo basico de ciclo do-while
#include "iostream"

using namespace std;
int main()
{
    int xnumero;
    int i = 1;
    int xresultado = 0;

    cout <<  "Ingrese un numero entre 1 y 10 ";
    cin >> xnumero;

    do
    {
        xresultado = xnumero * i;
        cout <<  xnumero << " * " << i << " = " << xresultado << endl;
         i++;
    }while ( i<+10 );

    system("PAUSE");
    return 0;
}
