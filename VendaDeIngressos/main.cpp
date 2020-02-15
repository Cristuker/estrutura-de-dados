#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "functions.h"
/*Requisitos-Controla número de pessoas - okentrada e saída - oklugares disponíveis -ok

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
        cout <<"-----------------" << endl;
        cout <<"Total de lugares disponiveis: "<< s.getAvaibleTickets() <<endl;
        cout <<"Total de pessoa :" << s.getAvaibleTickets() <<endl;
        cout <<"-----------------" << endl;
        cout << "1 - Comprar ingressos" << endl;
        cout << "2 - Devolver ingresso" << endl;
        cout << "3 - Trocar de lugar" << endl;
        cout << "-> ";
        cin >> action;

        switch(action){
            case 1:{
                    int seat;

                    if(!s.getAvaibleTickets() <= 100){

                        s.buyTickets();

                        cout << "Qual poltrona de 1 a 100"<< endl;
                        cout << "->" ;
                        cin >> seat;

                        int thisSeatIsInUse = s.inUseSeat(seat);

                        if(!thisSeatIsInUse){
                            s.registerSeat(seat);
                            cout << "Seu lugar "<< seat << " foi registrado com sucesso!" << endl;
                        }else{
                            cout << "Esse lugar já está reservado, por favor escola outro!" << endl;
                        }

                    }else{
                        cout << "Todos os locais foram reservados!" << endl;
                    }

                    s.clearDsipaly();
                break;
            }

            case 2:{
                int seat;

                cout << "Digite o número da sua poltrona " << endl;
                cout <<"-> ";
                cin >> seat;
                //lugar dela
                bool existSeat = s.thisSeatExist(seat);

                if(!existSeat){
                    cout << "Esse lugar não está reservado" << endl;
                    break;
                }
                cout << "Digite o número da poltrona que você deseja" << endl;
                cout <<"-> ";
                cin >> seat;

                existSeat = s.thisSeatExist(seat);

                if(existSeat){
                    cout << "Já existe alguém nesse lugar." << endl;
                    break;
                }

                s.clearDsipaly();
                break;
            }

            case 3:{
                break;
            }

            default:{
                cout << "Por favor digite uma opção valida!" << endl;
                s.clearDsipaly();
                break;
            }

        }

    }
}
