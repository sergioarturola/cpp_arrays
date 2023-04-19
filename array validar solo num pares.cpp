/*
 IEn un array de 6 posiciones, validar que solo entren numeros pares,
 mostrar por consola el array resultante
*/

#include<iostream>
using namespace std;

int main(){
	
	int taman = 6, numero;
	int array[taman];
	bool impar = true;
	
	cout<<"Llenando datos"<<endl;
	
	for(int i = 0; i<taman; i++){
		
		cout<<"Posicion["<<i<<"]: "; cin>>numero;
		if(numero%2== 0){
			array[i] = numero;
		}
		else{
			while(impar){
				cout<<"Ingresa un numero par"<<endl;
			    cout<<"Posicion["<<i<<"]: "; cin>>numero;
			    if(numero%2 == 0){
			    	array[i] = numero;
			    	break;
				}
			}
			
		}
		
	}
	
	cout<<"-- Array Resultante  --"<<endl;
	for(int i = 0; i<taman; i++){
		cout<<array[i]<<" ";
	}
}