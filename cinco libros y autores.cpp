/*
   realizar un programa en c/c++ que pida 5 libros y 5 autores, se deberan guardar los datos
   en una lista y al final del programa mostrar los datos
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string libros[5], autores[5];
	
	cout<<"Ingresa la siguiente informacion de los libros\n";
	
	for(int i=0; i<5; i++){
		cout<<"**** Libro "<<i+1<<" ****\n";
		cout<<"Titulo: ";
		getline(cin, libros[i]);
		cout<<"Autor: ";
		getline(cin, autores[i]);
	}
	cout<<"\n";
	for(int i=0; i<5; i++){
		cout<<libros[i];
		cout<<"\n";
		cout<<autores[i];
		cout<<"\n";
		cout<<"*********\n";
	}
}
