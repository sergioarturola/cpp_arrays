/*
 Dado un array ya predefinido por el usuario intercambiar sus valores
 sin usar otro array
*/

#include<iostream>
using namespace std;

int main(){
	
	int numeros[] = {1, 2, 3, 4, 5};
	int taman = 5;
	
	for(int i = 0; i<taman/2; i++){
		
		int temp = numeros[i];
		numeros[i] = numeros[taman- (i+1)];
		numeros[taman- (i+1)] = temp;
	}
	
	for(int i = 0; i<taman; i++){
		cout<<numeros[i]<<" ";
	}
}