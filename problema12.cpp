#include <iostream>

using namespace std;

int main() {
   int n,i;
   int factormax=1;
   cout << "Ingrese un numero entero positivo: ";
   cin >> n;
   
   
   for ( i=2; i<=n; i++) {
      while (n%i==0) {
         factormax=i;
         n/=i;
      }
   }
   
   cout << "El maximo factor primo es: " << factormax << endl;
   
   return 0;
}