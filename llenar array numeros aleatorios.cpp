/*
   Llenar un array de 10 posiciones con numeros aleatorios del 1 al 100
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

//using namespace std;

int main(){
	
	srand((unsigned)time(NULL));
	int numeros[10];
	int aleatorio;
	
	
	
	for(int i = 0; i<=10; i++){
		aleatorio = rand()%100+1;
		numeros[i] = aleatorio;
	}
	
	for(int i = 0; i<=10; i++){
		std::cout<<" "<<numeros[i];
	}
	
	return 0;
	
}
