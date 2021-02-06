#include <iostream>
#include <string>
using namespace std;

string productosDeBelleza[5][4]={
  {"001", "Sombras","20","10" },          
  {"002", "Rimel" ,"90","32"},          
  {"003", "Lipstick","20","40" },          
  {"004", "Base","300" ,"5"},          
  {"005", "Delineador","60","0" }        
};

void listarProductos(){
	system("cls");
	cout<<endl;
	cout<<"Listado de Productos"<<endl;
	cout<<"********************"<<endl;
	cout<<"Codigo,Descripcion y Existencia"<<endl;

	for(int i=0;i<5;i++)
	{
	cout<<productosDeBelleza[i][0]<<" | "<<productosDeBelleza[i][1]<<" | "<<productosDeBelleza[i][2]<<" | "<<productosDeBelleza[i][3]<<" | "<<endl;
	}
}

void movimientoInventario(string codigo, int cantidad,string tipoMovimiento){
	for(int i=0;i<5;i++)
	{
		if(productosDeBelleza[i][0]==codigo){
			if (tipoMovimiento=="+"){
		       productosDeBelleza[i][2]= to_string(stoi(productosDeBelleza[i][2]) + cantidad);
			}else{
		 		productosDeBelleza[i][2]= to_string(stoi(productosDeBelleza[i][2]) - cantidad);
		 	}
		}
	}
	
}
void movimientoPrecio(string codigo, int precio,string tipoMovimiento){
	for(int i=0;i<5;i++)
	{
		if(productosDeBelleza[i][0]==codigo){
			if (tipoMovimiento=="+"){
		       productosDeBelleza[i][3]= to_string(stoi(productosDeBelleza[i][3]) + precio);
			}else{
		 		productosDeBelleza[i][3]= to_string(stoi(productosDeBelleza[i][3]) - precio);
		 	}
		}
	}
	
}

void ingresoDeInventario(){
	string codigo="";
	int cantidad=0;
	
	system("cls");
	cout<<endl;
	cout<<"Ingreso de Productos al inventario"<<endl;
	cout<<"**********************************"<<endl;
    cout<<"Ingrese el codigo del productos:";
	cin>>codigo;
	cout<<endl;
	cout<<"Ingrese la cantidad del producto:";
	cin>>cantidad;
	cout<<endl;

    movimientoInventario(codigo,cantidad,"+");
}

void salidaDeInventario(){
	string codigo="";
	int cantidad=0;
	
	system("cls");
	cout<<endl;
	cout<<"Salida de Productos al inventario"<<endl;
	cout<<"**********************************"<<endl;
    cout<<"Ingrese el codigo del productos:";
	cin>>codigo;
	cout<<endl;
	cout<<"Ingrese la cantidad del producto:";
	cin>>cantidad;
	cout<<endl;

    movimientoInventario(codigo,cantidad,"-");
}
void ajustePositivoDeInventario(){
	string codigo="";
	int precio=0;
	
	system("cls");
	cout<<endl;
	cout<<"Ajuste Positivo De Inventario"<<endl;
	cout<<"**********************************"<<endl;
    cout<<"Ingrese el codigo del productos:";
	cin>>codigo;
	cout<<endl;
	cout<<"Ingrese el precio del producto producto:";
	cin>>precio;
	cout<<endl;

    movimientoPrecio(codigo,precio,"+");
}
void ajusteNegativoDeInventario(){
	string codigo="";
	int precio=0;
	
	system("cls");
	cout<<endl;
	cout<<"Ajuste Negativo de inventario"<<endl;
	cout<<"**********************************"<<endl;
    cout<<"Ingrese el codigo del productos:";
	cin>>codigo;
	cout<<endl;
	cout<<"Disminuya el precio del producto:";
	cin>>precio;
	cout<<endl;

    movimientoPrecio(codigo,precio,"-");
}



int main(int argc, char const *argv[])
{
   int opcion=0;

   while(true){
    system("cls");
    
    cout<<"Sistema de Inventario";
    cout<<endl;
    cout<<"*********************";
    cout<<endl;
    cout<<endl;
    cout<<"1- Productos De Belleza"<<endl;
    cout<<"2- Ingrese la cantidad de producto al Inventario"<<endl; 
    cout<<"3- Disminuya la cantidad de producto al Inventario"<<endl;
    cout<<"4- Ingrese el precio al que esta el producto -- Ajuste Positivo"<<endl;
    cout<<"5- Disminuya el precio al que esta el producto -- Ajuste Negativo"<<endl;
    cout<<"0- Salir"<< endl;                                                        
    
    cout<<"Ingrese una opcion del menu:";
    cin>> opcion;
   
   switch (opcion)
   {
       case 1:
           listarProductos();
           break;
        
       case 2:
           ingresoDeInventario();
           break;
       case 3:
           salidaDeInventario();
           break;
        case 4:
           ajustePositivoDeInventario();
           break;
        case 5:
           ajusteNegativoDeInventario();
           break;
       default:
           break;
   }
   system("pause");
   
   if (opcion==0){
       break;
    }
   }
  
    return 0;
}

