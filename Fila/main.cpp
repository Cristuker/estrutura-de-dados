#include <iostream>
#include "filasequencial.h"

using namespace std;

int main(){
    Fila<int> f(10);
    int opc, x;

    do{
        cout << "Fila Sequencial" << endl;
        cout << "1 - Inserir no fim da fila" << endl;
        cout << "2 - Remover do inicio da fila" << endl;
        cout << "3 - Primeiro da fila" << endl;
        cout << "4 - Inserir no inicio" << endl;
        cout << "5 - Remover do final da fila" <<endl;
        cout << "6 - Exibir ultimo da fila" << endl;
        cout << "8 - Exibir fila" << endl;
        cout << "9 - Sair" << endl;
        cout << "Selecione:"<<endl;
        cout <<"-> ";
        cin >> opc;
        switch (opc){
        case 1:
            if (f.filacheia()){
                cout << "Fila cheia..." << endl;
            }
            else{
                cout << "Digite o valor:"<<endl;
                cout <<"-> ";
                cin >> x;
                f.insere(x);
                cout << "sucesso" << endl;
            }
            f.limparTela();
            break;
        case 2:
            if (f.filavazia()){
                cout << "fila vazia..." << endl;
            }
            else{
                cout << "Removido:" << f.remover() << endl;
            }
            f.limparTela();
            break;
        case 3:
            if (f.filavazia()){
                cout << "fila vazia..." << endl;
            }
            else{
                cout << "Primeiro:" << f.primeiro() << endl;
            }
            f.limparTela();
            break;
        case 4:
            cout <<"Digite o valor que deseja inserir"<<endl;
            cout <<"-> ";
            cin >> x;
            f.inserirNoInicio(x);
            f.limparTela();
            break;
        case 5:
            cout<< "Elemento removido:" << f.removerNoFim() <<endl;
            f.limparTela();
            break;
        case 6:
            if (f.filavazia()){
                cout << "fila vazia..." << endl;
            }
            else{
                cout << "Ultimo:" << f.ultimo() << endl;
            }
            f.limparTela();
            break;
        case 8:
            for(int index = f.inic; index <= f.fim ; index++ ){
                cout<<f.mostrarFila(index);
            }
            cout<<""<<endl;
           break;
        case 9:
            cout << "fim...." << endl;
            break;
        default:
            cout << "opcao invalida..." << endl;
            f.limparTela();
            break;
        }
    } while (opc != 9);
    return 0;
}
