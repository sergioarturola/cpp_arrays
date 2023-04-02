/*
Realizar un programa usando array que simule la fila de un autobus, donde se vayan ingresando
posiciones del 0-9 y por consola se vayan mostrando esas posiciones ocupadas, al final mostrar
un mensaje diciendo "autobus lleno" y terminar el programa
*/

#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main(){
	int asiento_libre = 10, asiento_ocupado = 0, posicion;
	char bandera = 'v';
	
	char asientos[] = {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O','O', 'O'};
	
	do{
	
	
    system("color 1F");
	cout<<"Estado actual\n"<<endl;
	for(int i = 0; i<10; i++){
		cout<<asientos[i]<<" ";
	}

	cout<<"\nAsientos Disponibles: "<<asiento_libre<<endl;
	cout<<"Asientos Ocupados: "<<asiento_ocupado<<endl;
    cout<<"Ingresa posicion: "; cin>>posicion;
    
    	if(asientos[posicion] == 'O'){
    		asientos[posicion] = 'X';
    		bandera = 'v';
    		
		}
		else{
			cout<<"Posicion ya ocupada"<<endl;
            bandera = 'f';
		}
	
	
	if(bandera == 'v'){
		asiento_libre--;
		asiento_ocupado++;
	}
	else{
		system("color FC");
		cout<<"No se ha movido nada"<<endl;
		Sleep(2500);
	}
    
	system("cls");
	
   }while(asiento_ocupado != 10);
	
	system("color 1A");
	cout<<"Autobus lleno"<<endl;
	return 0;
}
