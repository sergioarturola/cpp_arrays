/*
   escribe un programa en c/c++ en donde se ingrese un array de 3 elementos y en otro se almacenen
   los elementos multiplicaods por 5, imprimir ambos array
*/

#include<iostream>
using namespace std;

int main(){
	
	int lista[3];
	int lista_5[3];
	
	for(int i = 0; i<3; i++){
		cout<<"DATO["<<i<<"]: ";
		cin>>lista[i];
		
		lista_5[i] = lista[i] * 5;
	}
	
	cout<<"Lista original"<<endl;;
	
	for(int i = 0; i<3; i++){
		cout<<lista[i]<<" ";
	}
	
	cout<<"\nLista multiplicada por 5"<<endl;
	
	for(int i = 0; i<3; i++){
	
		cout<<lista_5[i]<<" ";
	}
	
	
	return 0;
	
}
