#include <iostream>
#include <stdlib.h>
#include "pilhasequencial.h"

using namespace std;
int main()
{
    Pilha<int> pilha(50);

    int resultado = 0;
    int n1 = 0;
    int n2 = 0;
    string input;

    do
    {
        cout << "Informe uma operação posfixa ou digite X para sair." << endl;
        cout << "-> ";
        cin >> input;

        if(input[0] == 'X') break;

        for (int index = 0; index < input.length(); index++)
        {
            switch (input[index])
            {
            case '0':
                pilha.empilha(0);
                break;
            case '1':
                pilha.empilha(1);
                break;
            case '2':
                pilha.empilha(2);
                break;
            case '3':
                pilha.empilha(3);
                break;
            case '4':
                pilha.empilha(4);
                break;
            case '5':
                pilha.empilha(5);
                break;
            case '6':
                pilha.empilha(6);
                break;
            case '7':
                pilha.empilha(7);
                break;
            case '8':
                pilha.empilha(8);
                break;
            case '9':
                pilha.empilha(9);
                break;
            case '-':
                n1 = pilha.desempilha();
                n2 = pilha.desempilha();

                for (int index = 0; index <= pilha.topo; index++){
                    resultado = n1 - n2;
                }

                if (index - input.length() == -1){
                    cout << "O resultado é: " << resultado << endl;
                }

                break;
            case '+': 
                n1 = pilha.desempilha();
                n2 = pilha.desempilha();

                resultado = n1 + n2;
                pilha.empilha(resultado);

                if (index - input.length() == -1)
                {
                    cout << "O resultado é: " << resultado << endl;
                }

                break;
            case '*':

                n1 = pilha.desempilha();
                n2 = pilha.desempilha();
                resultado = n1 * n2;

                pilha.empilha(resultado);

                if (index - input.length() == -1)
                {
                    cout << "O resultado é: " << resultado << endl;
                }
                break;
            case '/':

                n1 = pilha.desempilha();
                n2 = pilha.desempilha();

                for (int index = 0; index <= pilha.topo; index++)
                {
                    resultado = n1 / n2;
                }

                if (index - input.length() == -1)
                {
                    cout << "O resultado é: " << resultado << endl;
                }
                break;
            default:
                cout << "Digite um caractere válido" << endl;
                break;
            }
        }

    } while (true);

    return 0;
}
