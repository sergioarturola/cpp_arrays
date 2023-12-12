/*
Llenar 4 vectores de taman 5 que simulan 4 lineas de produccion y de manera automatica
llenar cada vector con numeros del 0 al 5 (cada numero representa un defecto en cada uno
de los 5 procesos con los que cuenta la linea se pide:
-Mostrar que linea tuvo mas defectos
-Mostrar que linea tuvo menos defectos
 -Motsrar promedio de defectos por linea
 -Motsrar promedio de defectos de todo el sistema
 Usar funciones para evitar repetir codigo siguiendo el principio DRY
*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
#define taman 5
using namespace std;

int generarAleatorio();
void llenarArray(int *numeros);
int sumaLinea(int *numeros);
void mayorMenorDefectos(int numero_a, int numero_b, int numero_c, int numero_d);
char lineaLetra(int num);

int main(){
    srand((unsigned)time(NULL));

    int a[taman];
    int b[taman];
    int c[taman];
    int d[taman];
    int suma_a = 0, suma_b = 0, suma_c = 0, suma_d = 0;
    int promedio = 0;

    //llenando los arrays
    llenarArray(a);
    llenarArray(b);
    llenarArray(c);
    llenarArray(d);

    //Realizando las sumas
    suma_a = sumaLinea(a);
    suma_b = sumaLinea(b);
    suma_c = sumaLinea(c);
    suma_d = sumaLinea(d);

    //sacando el promedio
    promedio = (suma_a+suma_b+suma_c+suma_d)/4;

    cout<<"- - - -  Resultados - - - -"<<endl;
    cout<<"Linea A: "<<suma_a<<" Linea B : "<<suma_b<<" Linea C: "<<suma_c<<" Linea D: "<<suma_d<<endl;
    cout<<"Promedio de fallas del sistema: "<<promedio<<endl;

    //detectando la linea con mayor y menor defectos
    mayorMenorDefectos(suma_a, suma_b, suma_c, suma_d);
    cout<<"\n- - - - - - - - - - - - - -"<<endl;

    return 0;
}

int generarAleatorio(){

    int numeroGenerado = rand()%6;
    return numeroGenerado;
}

void llenarArray(int *numeros){

    for(int i = 0; i<taman; i++){
        *(numeros+i) = generarAleatorio();
    }

    for(int i = 0; i<taman; i++){
        cout<<*(numeros+i)<<" ";
    }
    cout<<"\n-----------------\n";
}

int sumaLinea(int *numeros){
    int suma = 0;

    for (int i = 0; i<taman; i++){
        suma += *(numeros+i);
    }

    return suma;
}

void mayorMenorDefectos(int numero_a, int numero_b, int numero_c, int numero_d){

    int const taman_suma = 4;
    int sumas[taman],linea_mayor = 0, linea_menor = numero_a, mayor, menor;//linea_menor = a para inicializarlo
    //vamos a colocar en un array el resultado de la suma
    sumas[0] = numero_a;
    sumas[1] = numero_b;
    sumas[2] = numero_c;
    sumas[3] = numero_d;

    //recorriendo para encontrar el mayor y menor
    for(int i = 0; i<taman_suma; i++){
        if (sumas[i] > linea_mayor){
            linea_mayor = sumas[i];
            mayor = i;
        }

        if(linea_menor > sumas[i]){
            linea_menor = sumas[i];
            menor = i;
        }
    }
    //mostrando lineas con mayor y menor defecto
    cout<<"Linea con menor defecto: "<<lineaLetra(menor)<<endl;
    cout<<"Linea con mayor defecto: "<<lineaLetra(mayor)<<endl;


}

char lineaLetra(int numero){

    char letra;

    switch(numero){

    case 0:
        letra = 'A';
        break;
    case 1:
        letra = 'B';
        break;
    case 2:
        letra = 'C';
        break;
    case 3:
        letra = 'D';
        break;
    }

    return letra;
}


