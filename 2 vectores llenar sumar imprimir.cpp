/*
  Realizar un programa en c/c++ que utilizando 3 funciones realice las siguientes operaciones
  1-Leer 2 vectores de tamaño n (este es ingresado por el teclado)
  2- Realizar la suma de los elementos de ambos vectores
  3- imrpimir los vectores generados
*/

#include<stdio.h>
//funcion que imprime los vectores
void imprimirVector(int a[], int b[], int taman){
	
	printf("\nVector a\n");
	for(int i = 0; i<taman; i++){
		
		printf("%d " , a[i]);
	}
	
	printf("\nVector b\n");
	for(int i = 0; i<taman; i++){
		
		printf("%d ", b[i]);
	}
}

//funcion que suma los vectores
void sumaVector(int a[], int b[], int taman){
	
	int suma = 0;
	
	for(int i = 0; i<taman; i++){
		suma = suma + (a[i] + b[i]);	
	}
	
	printf("La suma de los vectores es: %d", suma);
}

//funcion que lee vector desde teclado

void leerVector(int taman){
	int a[taman], b [taman];
	
	printf("Lllenando Vector a\n");
	for(int i = 0; i<taman; i++){
		printf("Vector a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Lllenando Vector b\n");
	for(int i = 0; i<taman; i++){
		printf("Vector b[%d]: ", i);
		scanf("%d", &b[i]);
	}
	
	sumaVector(a, b, taman);
	imprimirVector(a, b, taman);
}


int main(){
	
	int taman;
	
	printf("Digita el tamano de los Vectores A y B: ");
	scanf("%d", &taman);
	leerVector(taman);
	
	return 0
}
