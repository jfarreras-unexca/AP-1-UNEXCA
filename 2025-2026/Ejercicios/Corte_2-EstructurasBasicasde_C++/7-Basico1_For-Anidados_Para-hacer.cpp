// Ejemplo basico de ciclo while Anidados
#include "iostream"

using namespace std;
int main()
{
    int xnumero;
    int i = 1;
    int j = 0;
    int z = 0;


    for (i=1; i <= 10; i++)
    {
        for(j=1; j <= 10; j++)
        {
            z = i * j;
            cout <<  i << " * " << j << " = " << z << endl;
        }
        j=1;
         cout << endl;
    }
    system("pause");
    return 0;
}
