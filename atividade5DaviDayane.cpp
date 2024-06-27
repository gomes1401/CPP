#include <iostream>
#include <cstdlib> 
using namespace std; 
int main ()
{

    int NumSecreto = rand() % 100 + 1;
    
    int tentativas = 8; 
    int palpite;
    
    do 
    {
        cout << "Tentativa" << tentativas << ", digite um número:";
        
        cin >> palpite; 
        if (palpite < NumSecreto)
        {
            cout << "Muito Baixo!" << endl; 
        }
        else if(palpite > NumSecreto){
            cout << "Muito Alto!" << endl; }
        tentativas--;
    } while (palpite != NumSecreto && tentativas > 0);
   
    if (palpite == NumSecreto){
            
   
        cout << "Parabéns! Você acertou o número com" << 8 - tentativas << "tentativa(s)"<< endl;
    }
    else {
        cout << "Você não conseguiu adivinhar o número. O número secreto era: " << NumSecreto << "!" << endl;
    }
    return 0;
}