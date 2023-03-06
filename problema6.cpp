#include <iostream>

using namespace std;

int main(){

    int numero;
    int i=2;
    double factorial=1;
    double e;
    float contador_e=0;

    cout<<"Dame un numero: ";
    cin>>numero;

    while(numero<0){
        cout<<"Ese es un numero negativo, no tengo concebida tal operacion, lo siento <3: "<<endl<<"Dame otro numero:";
        cin>>numero;
    }
    if(numero==0){
        cout<<"El resultado de la suma es: 1"<<endl;
    }
    else if(numero==1){
        cout<<"El resultado de la suma es: 2"<<endl;
    }
    else{
        while(i<numero){
            factorial=factorial*i;
            e=1/factorial;
            contador_e=contador_e+e;
            i=i+1;
        }
        contador_e=contador_e+2;
        cout<<"El resultado de la suma es: "<<contador_e<<endl;

    }
    
    

    return 0;
}