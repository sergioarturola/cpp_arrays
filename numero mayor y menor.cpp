/*
  Escriba un programa que contenga una lista de 20 elementos generados al azar y al final
  imprima el numero mayor y el numero menor
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int max, min, lista[20], aleatorio = 0;
	srand((unsigned)time(NULL));
	
	//llenando el array
	
	for(int i = 0; i<20; i++){
		aleatorio = rand()%100+1;
		lista[i] = aleatorio;
	}
	
	max = lista[0];
	min = lista[0];
	
	//buscando min y max
	
	for(int i = 0; i<20; i++){
		if (lista[i] > max){
			max = lista[i];
		}
		
		if(lista[i] < min){
			min = lista[i];
		}
		
		//imprimiendo el array
		cout<<lista[i]<<" ";
	
	}
	
	cout<<"\n";
	cout<<"El numero mayor es: "<<max<<endl;
	cout<<"El numero menor es: "<<min<<endl;
	

	
}
