#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	using namespace std;

int main(int argc, char** argv) {
	
  int numero[100][100],filas,columnas;
  
  	cout<<"digite el numero de filas:";
	cin>>filas;
	cout<<"Digite el numero de columnas:";
	cin>>columnas;
	
	     // ingresamos los valores mediantes for anidados 
		 
		 for(int i=0;i<filas;i++){
		 	for(int j=0;j<columnas;j++){
		 		cout<<"Ddigite un numero [" <<i<<"]["<<j<<"]";
		 		cin>>numero[i][j];  // aaca se guardan los valores
		 		
			 }
		 }
		 
		 
		 // mostramos la Raiz
		 
		 
		 for(int i=0;i<filas;i++){
		 	for(int j=0;j<columnas;j++){
		 		
		 		cout<<numero[i][j];
			 }
			 cout<<"\n";
		 }
		 
		 	
	return 0;
}
	
	

