
#include "iostream"

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    cout << "Introduzca el valor de A --> ";
    cin >> A;

    cout << "\n";
    cout << "Introduzca el valor de B --> ";
    cin >> B;
    if(A > B)
    {
        cout << "\n";
        cout << "A es  Mayor que B   " << " A = " << A << " y " << " B " << B << endl;
    }
    else
    {

        cout << "\n";
        cout << "B es  Mayor que A   " << " B = " << B << " y " << " A " << A << endl;
    }
    //system("pause");
}
