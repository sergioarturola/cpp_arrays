/*
 Dado el siguiente array [4, 9, 6, 1] imprimirlo en consola de modo inverso
*/

#include<iostream>
using namespace std;

int main(){
	
	int numeros[] = {4, 9, 6, 1};
	int taman = 4;
	for(int i=taman-1; i>=0; i--){
	  numeros[i] = numeros[i];
	}
	
	for(int i=3; i>=0; i--){
	  cout<<numeros[i]<<" ";
	}
	
	
	return 0;
}
