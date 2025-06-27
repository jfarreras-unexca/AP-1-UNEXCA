// Ejemplo basico de ciclo while
#include "iostream"

using namespace std;
int main()
{
    int xnumero;
    int i = 1;
    int j = 0;
    int z = 0;


    while( i <= 10)
    {
        while( j <= 10)
        {
            z = i * j;
            cout <<  i << " * " << j << " = " << z << endl;
            j++;
        }
        j=1;
        i=i+1;
        cout << endl;
    }
    system("pause");
    return 0;
}
