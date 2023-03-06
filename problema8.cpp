#include <iostream>

using namespace std;

int main(){
    string signo = "+";
    string impresiona="";
    string impresionb="";
    string pantalla;
    int suma=0;
    int a,b,c,multiplosa=0,multiplosb=0;
    int i=1;

    cout<<"Dame tres numeros: ";
    cin>>a;
    cin>>b;
    cin>>c;

    while(multiplosa<c && multiplosb<c){
        multiplosa=a*i;
        multiplosb=b*i;
        if(multiplosa != multiplosb){
            suma=multiplosb+multiplosa;    
        }
        impresiona=impresiona+to_string(multiplosa)+signo;
        impresionb=impresionb+to_string(multiplosb)+signo;
        i+=1; 
    }
    pantalla=impresiona+impresionb;


    
    cout<<pantalla<<endl<<suma;


 
}

    
