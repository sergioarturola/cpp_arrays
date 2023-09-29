/*
 Escribe un programa que dado un array de N elementos imprima los 3
 elementos mayores, por ejemplo dado el array
 l = {12, 13, 1, 10, 34, 1}
 debera retornar
 34,13,12

 Restricciones:
 -Usar funciones y probar con vectores de distinto tamaño
 -El array debe tener al menos 4 elementos validar que sea asi, en caso
 contrario mandar un mensaje
*/
#include<iostream>
using namespace std;

int main()
{
    int lista[] = {12, 13, 1, 10, 34, 1};
    int taman = sizeof(lista)/sizeof(int);
    int primero = 0, segundo = 0, tercero = 0, aux_1 = 0, aux_2 = 0;

    for(int i = 0; i<taman; i++)
    {

        if(lista[i] > primero)
        {
            aux_1 = primero;
            primero = lista[i];

            aux_2 = segundo;
            segundo = aux_1;

            tercero = aux_2;
        }
    }
    cout<<"Primero: "<<primero<<" Segundo: "<<segundo<<" Tercero: "<<tercero<<endl;

    return 0;
}
