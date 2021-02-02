#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int opcion=0;
     cout<<"Ingrese una opcion:";
     cin>>opcion;
     switch (opcion)
     {
     case 1:
     {
     cout<<"Escogites 1"<<endl;
         break;
     }
     case 2:
     cout<<"Escogites 2"<<endl;
         break;
    case 3:
     cout<<"Escogites 3"<<endl;
         break;
     
     default:
        cout<<"ingrese una opcion entre 1 y 3"<<endl;
         break;
     }
    return 0;
}
