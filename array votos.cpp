/*
 Crear un algoritmo que sea capaz de almacenar 10 votos, donde las opciones sean del 1 al 5
*/

#include<iostream>
using namespace std;

int main(){
	
	int votos[10];
	int  votoUno = 0, votoDos = 0, votoTres = 0, votoCuatro = 0, votoCinco = 0, voto;
	
	for(int i = 0; i<10; i++){
		
			cout<<"Digita voto["<<i<<"]: "; cin>>voto;
			if(voto >= 1 && voto <=5){
			
			votos[i] = voto;			
			
		    if(voto == 1) votoUno++;
			if(voto == 2) votoDos++;
			if(voto == 3) votoTres++;
			if(voto == 4) votoCuatro++;
			if(voto == 5) votoCinco++;
		   }
		   else{

		   	//no dejamos salir hasta que sea el valor correcto en esa posicion
		   	 
		   	 while(voto<1 || voto >5){
		   	 	cout<<"Voto invalido, vuelve a intentarlo"<<endl;
		   	 	cout<<"Digita voto["<<i<<"]: "; cin>>voto;
				}
		   	 
		   }
	   }
	
		    cout<<"\n-- Resultados --"<<endl;
			cout<<"1 tiene "<<votoUno<<" votos"<<endl;
			cout<<"2 tiene "<<votoDos<<" votos"<<endl;
			cout<<"3 tiene "<<votoTres<<" votos"<<endl;
			cout<<"4 tiene "<<votoCuatro<<" votos"<<endl;
			cout<<"5 tiene "<<votoCinco<<" votos"<<endl;
		
	cout<<"\nVotos Registrados"<<endl;
	for(int i = 0; i<10; i++){
		
		cout<<votos[i]<<" ";
	}		
	
	
	return 0;
}
