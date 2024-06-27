
#include <iostream>
using namespace std; 

int main()
{
    int num;
    cout<< "Digite um número";
    cin >> num;
    
    if (num%2==0){
        :cout<<"O seu número é par. Uau..."<< endl;
    }
    else{
        cout<<"O seu número é ímpar, parabéns! É o melhor tipo de número de qualquer jeito."<< std::endl;
    }

    return 0;
}