#include<iostream>
using namespace std;


int main(){

 int lista [] = {23, 56, 89, 80, 77, 12};
 int taman = 6;
 int primer = lista[0], segundo = lista[0];

 for(int i = 0; i<taman; i++){

 //elemento mayor
    if(lista[i] > primer){
        segundo = primer;
        primer = lista[i];

    }
//segundo elemento mayor
    if(lista[i]>segundo && lista[i] != primer){
        segundo = lista[i];
    }
 }

 cout<<"Primer mayor: "<<primer<<" "<<"Segundo mayor: "<<segundo<<endl;
}
