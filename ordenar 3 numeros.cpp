/* 
 Aplicando el buble sort pida por consola 3 numeros, almacenarlos en un array y despues ordenarlos
*/

#include<iostream>
using namespace std;

int main(){
	
	int lista[3];
	int auxiliar;
	
	for(int i =0; i<3; i++){
		
	cout<<"Ingresa el numero ["<<i<<"]:";
	cin>>lista[i];
	
	}
	
	//aplicando metodo burbuja
	
	for(int i = 0; i<3; i++){ //para que recorra todo el array
		for(int j = 0; j<(3-i); j++){ //para que vaya comparando valores
			
			if(lista[j] > lista[j+1]){ //si se cumple entra a la burbuja
			
			  auxiliar = lista[j];
			  lista[j] = lista[j+1];
			  lista[j+1] = auxiliar;
				
			}
		}
		
		
	}
	
		
	for(int i = 0; i<3; i++){
		
	cout<<lista[i]<<" ";
	}
	
	
	return 0;
}
