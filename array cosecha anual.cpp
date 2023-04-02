/*
   Se pide realizar un programa donde se almacenen las toneladas que se cosecharon durante 12 meses
   e indique los siguientes puntos
   1-promedio anual de la cosecha
   2-total de meses con cocsecha superior e inferior al promedio
   3-el mes con mayor produccion
   
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


void operaciones_lista(int cosecha[], int size){
	
	int suma = 0, promedio, contador_superior = 0, contador_inferior = 0, mes_mayor, mes_maxton;
	
	for(int i = 0; i<size; i++){
		suma = suma + cosecha[i];
	}
	
	promedio = (suma/size); //obtenemos el promedio 
	
	
	
	for(int i = 0; i<size; i++){
		if(cosecha[i] > promedio){ 
			contador_superior++;
		} 
		if(cosecha[i] < promedio){
			contador_inferior++;
		} 
	}
	
	mes_mayor = cosecha[0]; //N° de meses mayores y menores del promedio
	
	for(int i = 0; i<size; i++){
		
		if(cosecha[i] > mes_mayor){
			mes_mayor = cosecha[i];
			mes_maxton = i;
		}
		
	
	}
	
	
	
	//imprimiendo los resultados
	
	cout<<"El promedio anual de las toneladas coseschadas es de: "<<promedio<<endl;
	cout<<"Meses con cosecha SUPERIOR al promedio anual: "<<contador_superior<<endl;
	cout<<"Meses con cosecha INFERIOR al promedio anual: "<<contador_inferior<<endl;
	cout<<"El mes que se produjeron mas toneladas fue: ";
	     
			switch(mes_maxton){
			case 0: cout<<"Enero"; break;
			case 1: cout<<"Febrero"; break;
			case 2: cout<<"Marzo"; break;
			case 3: cout<<"Abril"; break;
			case 4: cout<<"Mayo"; break;
			case 5: cout<<"Junio"; break;
			case 6: cout<<"Julio"; break;
			case 7: cout<<"Agosto"; break;
			case 8: cout<<"Septiembre"; break;
			case 9: cout<<"Octubre"; break;
			case 10: cout<<"Noviembre"; break;
			case 11: cout<<"Diciembre"; break;
		}

	
}



int main(){
	
	srand((unsigned)time(NULL));
	int aleatorio;
	int cosecha[12];
	
	//llenando el array
	
	for(int i = 0; i<12; i++){
		
		aleatorio = 100 + rand()%(900-100);
		
		cosecha[i] = aleatorio;
	}
	
	//imprimiendo el array
	cout<<"ENE FEB MAR ABR MAY JUN JUL AGO SEP OCT NOV DIC"<<endl;
	for(int i = 0; i<12; i++){
		cout<<cosecha[i]<<" ";
	}
	
	cout<<"\n\n";
	
	//pasandolo a la funcion
	operaciones_lista(cosecha, 12);
	
	return 0;
	
}
