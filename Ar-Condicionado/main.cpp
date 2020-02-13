#include <iostream>
#include<stdlib.h>
#include "lib-ar.h"


using namespace std;

int main(){

    arCondicionado AC;

    int acao;

    while(true){
        cout << "========================" << endl;
        cout << "| Ar condicionado Status|" << endl;
        cout << "| Ligado: " << AC.getStatus()  <<"             |"<< endl;
        cout << "| Temperatura: " << AC.getTemperatura() << "       |" << endl;
        cout << "========================" << endl;

        cout << "1 - Aumentar temperatura" << endl;
        cout << "2 - Diminuir temperatura" << endl;
        cout << "3 - Ligar/Desligar" << endl;
        cout << "4 - Sair"<< endl;

        cin >> acao;

        switch(acao){
            case 1:{
                if(AC.getStatus()){
                    AC.aumentarTemperatura();
                }else{
                    cout << "Por favor ligue o ar-condicionado" <<endl;
                }
                break;
            }
            case 2: {
                if(AC.getStatus()){
                    AC.diminuirTemperatura();
                }else{
                    cout << "Por favor ligue o ar-condicionado" <<endl;
                }
                break;
            }

            case 3:{
                AC.ligar();
                break;
            }
            case 4:{
                return 0;
                break;
            }
            default:{
                cout << "Opção invalda ´´"<< endl;
                break;
                system("cls");
            }
        }
    }
    return 0;
}
