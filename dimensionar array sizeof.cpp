/*
 Usando el operador "siezeof" imprimir por consola cuantos elementos tiene un array ya predefinido
*/
#include<iostream>
using namespace std;

int main(){
	
	int numeros[] ={1,2,3,4,5,6,7};
	
	int total = sizeof(numeros)/sizeof(numeros[0]);

	cout<<total<<endl;
	cout<<"Total de elementos: "<<total; 
	
	
}