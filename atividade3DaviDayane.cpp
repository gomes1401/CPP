#include <iostream>
using namespace std;

int main(){
  
  int comp1, comp2, comp3;
  
  cout<< "Determine o primeiro comprimento: ";
  cin>> comp1;
  
  cout << "Determine o segundo comprimento: ";
  cin >> comp2;
  
  cout<< "Determine o terceiro comprimento: ";
  cin >> comp3;
  
  if(comp1+comp2>comp3&&comp1+comp3>comp2&&comp2+comp3>comp1) // && -> AND | Serve para adicionar uma operação e retorna verdadeira se todas as expressões forem verdadeiras.
  {
      cout << "Seus comprimentos podem formar um trângulo!";
  }
  else{
      cout << "Seus comprimentos não podem formar um triângulo.";
  }
    return 0;
    
}