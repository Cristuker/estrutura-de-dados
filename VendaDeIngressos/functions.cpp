#ifndef functions_H_INCLUDED
#define functions_H_INCLUDED
#include <time.h>
struct Sells{

    private:
        int maxTickets = 100;
        int avaibleTickets = 100;
        int i = 0;
        int seats[100];

    public:
        void buyTickets(){
            maxTickets = maxTickets -1 ;
            avaibleTickets = avaibleTickets -1 ;
        }


        int getAvaibleTickets(){
            return avaibleTickets;
        }

        void registerSeat(int newSeat){
            seats[i] = newSeat;
            i++;
        }

        int inUseSeat(int seat){

            int index;

            for(index = 0; index <= 100; index++){
                cout << index;
                if(seat == seats[index]){
                    return 1;
                }
            }

            if(index >= 100){
                return 0;
            }


        }

        void clearDsipaly(){
            int time = clock();

            while(clock() - time < 500000){

            }

            system("clear");

        }

        bool thisSeatExist(int seat){

            for(int index = 0; index <= 100; index++){

                if(seat == seats[index]){
                    return true;

                }else{
                    return false;
                }

            }

        }


};

#endif // functions_H_INCLUDED
