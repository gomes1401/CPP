#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Digite um número inteiro: ";
    cin >> num;

    if(num<=1){
       cout<< "Não é primo";
    }
    else{
        for(int i = 2; i < num; i++){
            if(num%i == 0){
                cout<< "Não é primo";
                return 0;
            } 
        }
    }
    cout<< "É primo.";
 
    return 0;
    
}