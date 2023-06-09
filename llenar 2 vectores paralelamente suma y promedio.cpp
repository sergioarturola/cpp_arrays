/*
Crear un programa que lea 2 vectores de 5 elementos cada uno 
imprima los valores de manera vertical e imprima el promedio de cada uno
*/
#include<iostream>
using namespace std;

int main(){
	
	int uno[5], dos[5], sum_uno = 0, sum_dos = 0, promedio_uno, promedio_dos;
	
	for(int i = 0; i<5; i++){

			cout<<"Vector 1 ["<<i<<"]: ";
			cin>>uno[i]; 
			sum_uno += uno[i];
			cout<<"Vector 2 ["<<i<<"]: ";
			cin>>dos[i]; 
			sum_dos += dos[i];

	}
	
	cout<<"\nVector 1\t Vector 2"<<endl;
	for(int i = 0; i<5; i++){
		cout<<uno[i]<<"\t\t"<<dos[i]<<endl;
	}
	promedio_uno = sum_uno/5;
	promedio_dos = sum_dos/5;
	
	cout<<"Promedio Vector 1: "<<promedio_uno<<endl;
	cout<<"Promedio Vector 2: "<<promedio_dos<<endl;
	
	
}
