#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int juego=0;
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl;
    cout<<"Ingrese un numero del menu para seleccionar un juego: ";
    cin>>juego;
    system("cls");
    if(juego==1){
     
    starShip();
    
    }
     else if(juego==2){
    
    snake();
      
    }
  
    return 0;
}
