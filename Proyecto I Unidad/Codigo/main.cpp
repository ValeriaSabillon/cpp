#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int opcion=0;
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl;
    cout<<"Ingrese un numero del menu para seleccionar un juego: ";
    cin>>opcion;
    system("cls");

    switch (opcion)
     {
     case 1:
     {
      starShip();
         break;
     }
     case 2:
      snake();
         break;
      default:
        cout<<"Ingrese una opcion entre 1 y 2"<<endl;
         break;
     }
   
    return 0;
}
