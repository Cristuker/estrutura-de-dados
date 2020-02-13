#ifndef TEMPERATURA_H_INCLUDED
#define TEMPERATURA_H_INCLUDED



struct arCondicionado{

    int temperatura = 30;
    bool status = true;

    void ligar(){
        if(status){
            status = false;
        }else{
            status = true;
        }
    }

    void diminuirTemperatura(){
        temperatura = temperatura - 1;
    }

    int getTemperatura(){
        return temperatura;
    }

    void aumentarTemperatura(){
        temperatura = temperatura + 1;
    }

    bool getStatus(){
        return status;
    }
};
#endif // TEMPERATURA_H_INCLUDED


