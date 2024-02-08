#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){

    srand((unsigned)time(NULL));
    int num_aleatorios[5];
    int num_usuario[5];
    int numero, indice = 0, iguales = 0;

    //pidiendo los numeros del 0 al 10 5 veces
    while(indice<5){
        cout<<"Ingresa numero["<<indice<<"]: ";
        cin>>numero;
        if(numero >=0 && numero <=10){
            num_usuario[indice] = numero;
            indice++;
        }
        else{
            cout<<"Numero incorrecto, vuelve a intentarlo"<<endl;
            continue;
        }
    }

    //llenando el array con elementos aleatorios
    for(int i = 0; i<5; i++){
        int aleatorio = rand()%10;
        num_aleatorios[i] = aleatorio;

        cout<<"Usuario["<<i<<"]: "<<num_usuario[i]<<" Aleatorio["<<i<<"]: "<<num_aleatorios[i]<<endl;
    }

    //comparando elementos
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(num_usuario[i] == num_aleatorios[j]){
                iguales++;
            }
        }
    }

    cout<<"Elementos en comun: "<<iguales<<endl;

    if(iguales >= 3){
        cout<<"¡¡¡ F E L I C I D A D E S !!!"<<endl;
    }
    else{
        cout<<"Gracias por intentar"<<endl;
    }

}
