/*
  Dado 2 arrays ya definidos del mismo tamaño, en un tercer array
  almacenar la suma
*/

#include<iostream>
using namespace std;

int main(){
	
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b []= {11, 17, 36, 5, 14, 3, 2, 1};
	int c[8];
	
	for (int i = 0; i<8; i++){
		c[i] = a[i]+b[i];
	}
	
	for(int i = 0; i<8; i++){
		cout<<c[i]<<" ";
	}
	
	return 0;
}
