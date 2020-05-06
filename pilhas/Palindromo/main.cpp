#include <iostream>
#include "pilhasequencial.h"

using namespace std;

int main(){
    
    Pilha<char> pilha(50);

    cout << "Palindromo" << endl;
    string frase;
    cout <<"Digite a frase?" << endl;
    cin >> frase;

    for(int i = 0; i < frase.length(); i++){ //frase.length() pode ser frase.size()
       pilha.empilha(frase[i]); // frase.at(i) Por colocar na pilha a frase será invertida 
    }


    for(int i = 0; i < frase.size(); i++){ 
        if(frase.at(i) == pilha.elementodotopo()){
            pilha.desempilha();
        }else{
            break;
        }
    }

    if(pilha.pilhavazia()){
        cout << "É um palindromo" << endl;
    }else{
        cout << "Não é um palindromo" << endl;
    }
    
    return 0;
}
