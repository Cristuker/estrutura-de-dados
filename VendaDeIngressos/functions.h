#ifndef functions_H_INCLUDED
#define functions_H_INCLUDED
#include <time.h>
using namespace std;
struct Sells{

    private:
        int maxTickets = 100;
        int i = 0;
        int seats[101] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


    public:
        void buyTickets(){
            maxTickets -- ;
        }


        int getAvaibleTickets(){
            return maxTickets;
        }

        void registerSeat(int newSeat){
            seats[i] = newSeat;
            i++;
        }

        bool inUseSeat(int seat){

            int index;

            for(index = 0; index <= 100; index++){
                if(seat == seats[index]){
                    return true;
                }
            }

            return false;



        }

        void clearDsipaly(){
            int time = clock();

            while(clock() - time < 3000000){

            }

            system("clear");

        }

        bool thisSeatExist(int seat){

            for(int index = 0; index <= 100; index++){

                if(seat == seats[index]){
                    return true;

                }

            }
            return false;

        }

        bool backTicket(int seat){

            for(int index = 0; index <=100;index++){

                if(seat == seats[index]){

                    seats[index] = 0;

                    maxTickets -- ;

                    return true;
                }
            }

            return false;

        }

        void showSeatsInUse(){
            for(int index = 0; index <=100;index++){

                if(seats[index] != 0){

                     cout << seats[index] << " ";

                }
            }

            cout << " " << endl;

        }


};

#endif // functions_H_INCLUDED
