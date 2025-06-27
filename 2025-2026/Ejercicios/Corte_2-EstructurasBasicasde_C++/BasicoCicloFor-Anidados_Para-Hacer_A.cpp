//Uso basico de ciclos For

#include<iostream>

int z=0;
int i=1;
int j=1;
using namespace std;

int main()
{
    for(i=1; i<=15; i++)
    {
        for(j=1; j<=10; j++)
        {
            z=i*j;
            cout <<  i << " * " << j << " = " << z << endl;
        }
        cout <<  endl;
        j=1;
     }
}
