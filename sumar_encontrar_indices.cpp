#include<iostream>
using namespace std;

void encontrar_suma(int lista[], int taman, int objetivo){

    int a = 0, b = 0;
    bool encontrado = false;

    cout<<"---------------------------------"<<endl;
    cout<<"Numero a encontrar en la suma: "<<objetivo<<endl;

    for(int i = 0; i<taman && !encontrado; i++){
        for(int j=0; j<taman && !encontrado; j++){
            cout<<"i["<<i<<"] + j["<<j<<"] ="<<lista[i] + lista[j]<<endl;//ir mostrando las sumas
            if(lista[i] + lista[j] == objetivo && lista[i] != lista[j] ){//que no sea el mismo numero que se sume
                a = i;
                b = j;
                encontrado = true;//para que no siga buscando y romper el bucle for
        }
    }
 }
        cout<<"["<<a<<", "<<b<<"]"<<endl;
}
int main(){

    int taman_uno = 4, taman_dos = 3;
    int objetivo_uno = 9, objetivo_dos = 6;
    int lista_uno [] = {2, 7, 11, 15};
    int lista_dos [] = {3,2,4};

    encontrar_suma(lista_uno, taman_uno, objetivo_uno);
    encontrar_suma(lista_dos, taman_dos, objetivo_dos);



}
