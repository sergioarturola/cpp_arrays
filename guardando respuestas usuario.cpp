/*
  Usando los vectores estaticos crea un codigo donde se pueda almacenar las siguientes preguntas de un usuario
  Nombre, edad, estado civil, estatura y peso y al final mostrar todas las respuestas
*/

#include<iostream>
using namespace std;

int main(){
	
	string datos [5];
	
	cout<<"Bienvenido!"<<endl;
	cout<<"Hola como te llamas? "; cin>>datos[0];
	cout<<"Que edad tienes? "; cin>>datos[1];
	cout<<"Cual es tu estado civil? "; cin>>datos[2];
	cout<<"Cual es tu estatura?"; cin>>datos[3];
	cout<<"Cual es tu peso? "; cin>>datos[4];
	
	cout<<"------"<<endl;
	cout<<datos[0]<< ", tienes "<<datos[1]<<" anios, eres "<<datos[2]<<" mides "<<datos[3]<<" y pesas"<<datos[4]<<" kg"<<endl;
	
	return 0;
}