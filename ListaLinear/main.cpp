#include <iostream>
#include "ListaLinear.h"
using namespace std;
int main()
{
    cout << "Lista Linear" << endl;
    int opc; //opcao a selecionar
    int valor; //valor de entrada
    ListaLinear<int> lista; //a Lista Linear
    do
    {
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-quantidade de elemantos"<<endl;
        cout<<"4-mostra elementos"<<endl;
        cout<<"5-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc)
        {
        case 1:
            cout<<"digite o valor para inserir:";
            cin>>valor;
            if(lista.listacheia())
                cout<<"lista cheia..."<<endl;
            else
                lista.insere(valor);
            break;
        case 2:
            if(lista.listavazia())
                cout<<"lista vazia...."<<endl;
            else
                template <typename Tipo>
            bool ListaLinear<Tipo>::listacheia()
            {
                return indice == MAX-1;
            }
            cout<<"removido:
                "<<lista.remover()<<endl;
                break;
        case 3:
            if(lista.listavazia())
                cout<<"lista vazia..."<<endl;
            else
                cout<<"Qtde de
    elementos:"<<lista.indice+1<<endl;
                    break;
        case 4:
            cout<<" Elementos da Lista:"<<endl;
            if(lista.listavazia())
                cout<<"lista vazia..."<<endl;
            else
            {
                for(int i=0; i<=lista.indice; i++)
                    cout<<lista.elementos[i]<<" ";
                cout<<endl;
            }
            break;
        case 5:
            cout<<"fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }
    while(opc!=5);
    return 0;
}
