#include <iostream>
#include <stdlib.h>
#include "filasequencial.h"

using namespace std;
int main(){
    
	string palavra = "";

	cout << "Informe a palavra uma palavra" << endl;
    cout << "->";
	getline(cin, palavra);
    Fila <int> f(palavra.length());

    for(int index = 0; index <= palavra.length(); index++){
        f.insere(palavra[index]);
    }

    if(f.filavazia()){
        cout << "Não foi adicionado nenhuma letra a fila." << endl;
    }

    while(!f.filavazia()){
        
        if(f.primeiro() == f.ultimo()){
            f.removerNoFim();
            f.remover();
        }
    }

    if(f.filavazia()){
        cout<<"É um palindromo!!!";
    }else{
        cout <<"Não é um palindromo";
    }


	return 0;
}