#include <iostream>
#include "functions.h"
/*Requisitos
-Controla número de pessoas, entrada e saída, lugares disponíveis;

-Ao inicicializar, entrar com capacidade máxima;

Menu:
1-Comprar ingresso
2-Devolver Ingresso
3-Trocar de Lugar
*/

using namespace std;

int main(){

    Sells s;

    int action = 1;

    while(true){
        cout << "Menu" << endl;
        cout << "1 - Comprar ingressos" << endl;
        cout << "2 - Devolver ingresso" << endl;
        cout << "3 - Trocar de lugar" << endl;
        cout << "-> ";
        cin >> action;

        switch(action){
            case 1:{
                    cout<< s.buy();
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            default:{
                return 0;
                break;
            }

        }

    }
}
