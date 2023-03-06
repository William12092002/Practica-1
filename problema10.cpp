#include <iostream>

using namespace std;

bool primo(int numero);

int main(){
    
    int n,i=0,o,numero=2,contador=0;
    
    cout<<"Dame un numero natural: ";
    cin>>n;
    while(contador<n){
        if (primo(numero)){
            contador++;
        }
        numero++;
    }
    
    cout<<"El "<<n <<" numero primo es "<<numero-1<<endl;
    return 0;
    
}

bool primo(int numero)
    {
        int divisores=0,o,contador;
        
        if(numero<=1){
            return false;
        }
        for(o=1;o<=numero;o++){
            if(numero%o==0){
                divisores++;
            }
        }
        if(divisores>2){
            return false;
        }
        else{
            return true;
        }
   
    }
 

