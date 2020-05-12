#include <iostream>
#include "pilhasequencial.h"

using namespace std;

int main()
{

    int opcao;

    Pilha<char> pilha(50);
    string frase;



    do {
        cout << "----Palindromo-----" << endl;
        cout << "1 - Testar uma nova frase" << endl;
        cout << "0 - Sair" << endl;
        cout << "-> ";
        cin >> opcao;

        switch (opcao) {
        case 1:

            if(!pilha.pilhavazia()){
                for(int index = 0; index >= pilha.topo; index++ ){
                    pilha.desempilha();
                }
            }

            cout << "Digite uma frase: " << endl;
            cout << "-> ";
            cin >> frase;
            for (int i = 0; i < frase.length(); i++) { //frase.length() pode ser frase.size()
                if (!(frase[i] == ' ')) {
                    pilha.empilha(frase[i]); // frase.at(i) Por colocar na pilha a frase será invertida
                }
            }

            for (int i = 0; i < frase.size(); i++) {
                if (frase.at(i) == pilha.elementodotopo()) {
                    pilha.desempilha();
                }
                else {
                    break;
                }
            }

            if (pilha.pilhavazia()){
                cout << "É um palindromo" << endl;
            }
            else {
                cout << "Não é um palindromo" << endl;
            }
            
            pilha.clearDisplay();

            break;
        case 0: 
            exit(0);
            break;
        default:
            cout << "Digite uma opção válida" << endl;
            pilha.clearDisplay();
            break;
        }
    } while (opcao != 0);

}
