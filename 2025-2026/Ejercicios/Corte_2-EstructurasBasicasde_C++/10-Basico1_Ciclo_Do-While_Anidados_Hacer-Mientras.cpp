// Ejemplo basico de ciclo do-while Anidados
#include "iostream"

using namespace std;
int main()
{
    int xnumero;
    int i = 1;
    int j = 1;
    int z = 0;

    do
    {
        do
        {
            z = i * j;
            cout <<  i << " * " << j << " = " << z << endl;
            j++;
         }while ( j<=10 );
          cout << endl;
          i=i+1;
    }while ( i<=10 );

    system("PAUSE");
    return 0;
}
