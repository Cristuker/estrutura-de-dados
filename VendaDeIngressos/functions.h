#ifndef functions_H_INCLUDED
#define functions_H_INCLUDED
#include <time.h>
struct Sells{

    private:
        int maxTickets = 100;
        int avaibleTickets = 100;
        int seats[100];

    public:
        void buyTickets(){
            maxTickets-- ;
            avaibleTickets-- ;
        }


        int getAvaibleTickets(){
            return avaibleTickets;
        }

        void registerSeat(int newSeat){
            int ticketNumber = 100 - avaibleTickets;
            seats[ticketNumber] = newSeat;
        }

        bool inUseSeat(int seat){

            for(int index = 0; index < 100; index++){

                if(seat == seats[index]){
                    return true;
                }
            }
            return false;

        }

        void clearDsipaly(){
            int time = clock();

            while(clock() - time < 500000){

            }

            system("clear");

        }

        bool thisSeatExist(int seat){
            for(int index = 0; index < 100; index++){

                if(seat == seats[index]){
                    return true;

                }else{
                    return false;
                }

            }

        }
};

#endif // functions_H_INCLUDED
