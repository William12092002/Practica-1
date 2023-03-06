#include <iostream>

using namespace std;

int main()
{
  int billete1000 = 1000, billete2000 = 2000, billete5000 = 5000, billete10000 = 10000, billete20000 = 20000, billete50000 = 50000;
  int moneda100 = 100, moneda200 = 200, moneda50 = 50, moneda500= 500;
  int valor;
  int billetes1000, billetes2000, billetes5000, billetes10000, billetes20000, billetes50000, monedas50, monedas100, monedas200, monedas500, excedente;

  cout <<"Ingresa el valor a evaluar:  ";
  cin >> valor;
  billetes50000=valor/billete50000;
  billetes20000=(valor%billete50000)/billete20000;
  billetes10000=(valor%billete20000)/billete10000;
  billetes5000=(valor%billete10000)/billete5000;
  billetes2000=(valor%billete5000)/billete2000;
  billetes1000=(valor%billete2000)/billete1000;
  monedas500=(valor%billete1000)/moneda500;
  monedas200=(valor%moneda500)/moneda200;
  monedas100=(valor%moneda200)/moneda100;
  monedas50=(valor%moneda100)/moneda50;
  excedente=(valor%moneda50);
  cout<< "Billetes de 50: "<< billetes50000<<endl<< "Billetes de 20: "<< billetes20000<< endl<<"Billetes de 10: "<<billetes10000<<endl<<"Billetes de 5: "<<billetes5000<<endl<<"Billetes de 2: "<<billetes2000<<endl<<"Billetes de 1: "<<billetes1000<<endl<<
         "Monedas de 500: "<< monedas500<<endl<< "Monedas de 200: "<<monedas200<<endl<<"Monedas de 100: "<<monedas100<<endl<<"Monedas de 50: "<<monedas50<<endl<<"Excedente: "<<excedente<< endl;



}
