/*
 Dado un array de 5 posiciones, realizar las siguientes operaciones
 1-llenar el array por entrada estandar
 2-encontrar el elemento mayor
 3-encontrar el segundo elemento mayor
*/

#include<iostream>
using namespace std;

int main(){
	
	int lista[5], mayor, segundo_mayor;
	
	for(int i = 0; i<5; i++){
		
		cout<<"Elemento "<<i<<": ";
		cin>>lista[i];
	}
	
	//primero debemos encontrar el mayor
	mayor = lista[0];
	
	for(int i = 0; i<5; i++){
		if(lista[i]> mayor){
			mayor = lista[i];
		}
	}
	//encontrando el 2do mayor	
	segundo_mayor = lista[0];
	
	for(int i = 0; i<5; i++){
		if(lista[i] >segundo_mayor && lista[i]<mayor){
			segundo_mayor = lista[i];
		}
	}
	
	cout<<"--Resultados---"<<endl;
	cout<<"El mayor es: "<<mayor<<endl;
	cout<<"El segundo mayor es: "<<segundo_mayor<<endl;
}