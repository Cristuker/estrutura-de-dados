#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "functions.h"


using namespace std;

int main(){

    Sells s;

    int action = 1;


    while(true){
        cout << "Menu" << endl;
        cout <<"-----------------" << endl;
        cout <<"Total de lugares disponiveis: "<< s.getAvaibleTickets() <<endl;
        cout <<"-----------------" << endl;
        cout << "1 - Comprar ingressos" << endl;
        cout << "2 - Devolver ingresso" << endl;
        cout << "3 - Trocar de lugar" << endl;
        cout << "4 - Lugares ocupados" << endl;
        cout << "5 - Sair" << endl;
        cout << "-> ";
        cin >> action;

        switch(action){
            case 1:{

                    if(s.getAvaibleTickets() <= 100){
                        int seat = 0;
                        cout << "Qual poltrona de 1 a 100"<< endl;
                        cout << "-> " ;
                        cin >> seat;

                        bool thisSeatIsInUse = s.inUseSeat(seat);

                        if(!thisSeatIsInUse){
                            s.buyTickets();
                            s.registerSeat(seat);
                            cout << "Seu lugar "<< seat << " foi registrado com sucesso!" << endl;
                        }else{
                            cout << "Esse lugar já está reservado, por favor escolha outro!" << endl;
                        }

                    }else{
                        cout << "Todos os locais foram reservados!" << endl;
                    }

                    s.clearDsipaly();
                break;
            }

            case 2:{
                int seat = 0;
                cout << "Digite o numero do seu ingresso" << endl;
                cout << "-> ";
                cin >> seat;

                bool thisSeatIsInUse = s.inUseSeat(seat);

                if(thisSeatIsInUse){
                    bool result = s.backTicket(seat);
                    if(result){
                        cout <<"Ingresso devolvido com sucesso!" << endl;
                    }else{
                        cout <<"Houve uma falha ao registrar a devolução do seu ingresso" << endl;
                    }
                }else{
                    cout << "O seu ingresso é invalido!" << endl;
                }

                s.clearDsipaly();

                break;
            }

            case 3:{
                int seat, mySeat;

                cout <<"Digite o número da sua poltrona " << endl;
                cout <<"-> ";
                cin >> mySeat;

                bool existSeat = s.thisSeatExist(mySeat);

                if(!existSeat){
                    cout << "Esse lugar não está reservado" << endl;
                    s.clearDsipaly();
                    break;
                }



                cout <<"Digite o número da poltrona que você deseja" << endl;
                cout <<"-> ";
                cin >> seat;

                bool existToSeat = s.thisSeatExist(seat);

                if(existToSeat){
                    cout << "Já existe alguém nesse lugar." << endl;
                    s.clearDsipaly();
                    break;
                }
                cout <<"Troca registrada com sucesso!" << endl;

                s.clearDsipaly();

                break;
            }
            case 4 :{
                s.showSeatsInUse();
                s.clearDsipaly();
                break;
            }
            case 5 :{

                cout << "Volte sempre! :D";

                return 0;
            }

            default:{
                cout << "Por favor digite uma opção valida!" << endl;
                s.clearDsipaly();
                break;
            }

        }

    }
}
