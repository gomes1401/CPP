#include <iostream>
using namespace std;

int main(){
   char opr;
   float num1,num2, resultado;
   
  cout << "Digite um valor: ";
   cin >> num1;
   
   cout<< "Digite a operação: ";
   cin>> opr;
   
   cout<< "Digite o outro valor: ";
   cin>> num2;
   
   
   
   if (opr=='+'){
       resultado = num1 + num2;
   }
   else if(opr=='-'){
      resultado = num1 - num2;
   }
   else if(opr=='*'){
       resultado = num1 * num2;
   }
   else if(opr=='/'){
       resultado = num1 / num2;
   }
       cout<< "O resultado é "<< resultado << "!"<< endl;

    return 0;
    
}