#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double a=0, b=0, suma=0, resta=0, multiplicacion=0,division=0;

    cout<<"\tOperaciones aritmeticas\n";

    cout<<"Ingrese el valor de a:";
    cin>>a;
    cout<<"Ingrese el valor de b:";
    cin>>b;
    
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;
    cout<<"la suma de a + b es:"<<suma<<endl;
    cout<<"la resta de a - b es:"<<resta<<endl;
    cout<<"la multiplicacion de a * b es:"<<multiplicacion<<endl;
    cout<<"la division de a / b es:"<<division<<endl;

    return 0;
}