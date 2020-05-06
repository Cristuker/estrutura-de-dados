#include <iostream>
#include "listalinear.h"
using namespace std;
int main()
{
    int tamanho;
    cout<<"Digite o tamanho da lista:";
    cin>>tamanho;
    Lista<int> lista(tamanho);
    int x,opc;
    do{
        cout << "Lista Linear" << endl;
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-exibe"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            if(lista.listacheia()){
                cout<<"Lista cheia..."<<endl;
            }
            else{
                cout<<"Valor:";
                cin>>x;
                lista.inserir(x);
            }
            break;
        case 2:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Removido:"<<lista.remover()<<endl;
            }
            break;
        case 3:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Elementos da Lista:"<<endl;
                for(int i=0;i<lista.indice;i++){
                    cout<<lista.v[i]<<" ";
                }
            }
            break;
        case 9:
            cout<<"Fim..."<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }while(opc!=9);
    return 0;
}


