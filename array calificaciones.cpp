/*
  Escribe un programa en C++ que contenga la calificacion de un grupo de 15 alumnos
  donde se despliegue la siguiente informacion
  1-Promedio del grupo
  2-Numero de alumnos aprobados y reprobados
  3-Porcentaje de alumnos aprobados y reprobados
  4-Numero de alumnos con calificacion mayor a 8 
*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	
    const int alumnos = 15;
	int calif_alumnos[alumnos];
	int aprobados = 0, reprobados = 0, calif_ocho = 0, suma = 0, aleatorio;
	float porcentaje_aprobados, porcentaje_reprobados, promedio;
	srand((unsigned)time(NULL));
	
	for(int i = 0; i<alumnos; i++){
		aleatorio = 5 + rand()%(11-5);
		calif_alumnos[i] = aleatorio;
		
		if(calif_alumnos[i] >= 6){
			aprobados++;
		}
		
		if(calif_alumnos[i]<6){
			reprobados++;
		}
		
		if(calif_alumnos[i] == 8){
			calif_ocho++;
		}
		
		suma = suma + calif_alumnos[i];
	}
	
	porcentaje_aprobados = (aprobados*100)/15;
	porcentaje_reprobados = (reprobados*100)/15;
	
	promedio = (suma/alumnos);
	
	for(int i = 0; i<alumnos; i++){
		cout<<calif_alumnos[i]<<" ";
	}
	
	cout<<"\n\n";
	cout<<"Promedio general del grupo: "<<promedio<<endl;
	cout<<"N alumnos aprobados: "<<aprobados<<endl;
	cout<<"% alumnos aprobados: "<<porcentaje_aprobados<<" %"<<endl;
	cout<<"N alumnos reprobados: "<<reprobados<<endl;
	cout<<"% alumnos reprobados: "<<porcentaje_reprobados<<" %"<<endl;
	cout<<"N alumnos mayor a 8: "<<calif_ocho<<endl;
	
	return 0;
}
