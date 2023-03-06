#include <iostream>

using namespace std;

int main(){

    int numero1;
    int numero2,modulo;
    int horas1, minutos1, horas2, minutos2;
    int horaf,minutosf;


    cout<<"Dame una hora. Debe ser un numero de cuatro digitos, los dos primeros representan la hora, y los dos ultimos los minutos : ";
    cin>>numero1;
    
    while(numero1<0||numero1>2359||numero1%100>59){
        cout<<"El numero que me entregaste no esta en el formato dado, recuerda: Debe ser un numero de cuatro digitos, los dos primeros representan la hora, y los dos ultimos los minutos : ";
        cin>>numero1;

    }

    cout<<"Dame un tiempo. Con las mismas condiciones del anterior : ";
    cin>>numero2;
    while (numero2 < 0 || numero2 > 2359 || numero2 % 100 > 59){

     cout<<"El numero que me entregaste no esta en el formato dado, recuerda: Debe ser un numero de cuatro digitos, los dos primeros representan la hora, y los dos ultimos los minutos : ";

     cin>>numero2;

    }
    
    horas1=numero1/100;
    minutos1=numero1%100;
    horas2=numero2/100;
    minutos2=numero2%100;

    horaf=horas1+horas2;
    minutosf=minutos1+minutos2;

    if(horaf>=24){

        modulo=horaf%24;
        horaf=modulo;
        
    }

    if(minutosf>=60){

        modulo=minutosf%60;
        minutosf=modulo;
        horaf=++horaf;

    }

    cout<<"La hora es: "<<horaf<<minutosf<<endl;



    


    





   

}