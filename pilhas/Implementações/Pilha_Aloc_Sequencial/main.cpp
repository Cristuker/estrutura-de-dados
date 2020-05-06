#include <iostream>
#include "pilhasequencial.h"

using namespace std;

int main()
{
    cout << "Pilha Sequencial "<< endl;
    Pilha<int> p(10);
    int valor,opc;
    do
    {
        cout<<"1-empilha"<<endl;
        cout<<"2-desempilha"<<endl;
        cout<<"3-elemento do topo"<<endl;
        cout<<"4-exibe a pilha"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc)
        {
        case 1:
            if(p.pilhacheia()){
                cout<<"Pilha cheia...."<<endl;
            }
            else{
                cout<<"Digite o valor:";
                cin>>valor;
                p.empilha(valor);
            }
            break;
        case 2:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                cout<<"Desempilhado:"<<p.desempilha()<<endl;
            }
            break;
        case 3:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                cout<<"Elem.Topo:"<<p.elementodotopo()<<endl;
            }
            break;
        case 4:
            if(p.pilhavazia()){
                cout<<"Pilha vazia..."<<endl;
            }
            else{
                cout<<"Elementos da Pilha"<<endl;
                for(int i=p.topo;i>=0;i--){
                    cout<<p.v[i]<<endl;
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
    }
    while(opc!=9);
    return 0;
}
