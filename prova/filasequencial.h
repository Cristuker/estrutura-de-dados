#ifndef FILASEQUENCIAL_H_INCLUDED
#define FILASEQUENCIAL_H_INCLUDED
template <typename Tipo>
struct Fila{
    Tipo *v;
    int tamanho;
    int inic;
    int fim;
    int qtde;
    Fila(int tam){
        tamanho=tam;
        v=new Tipo[tamanho];
        qtde=0;
        fim=-1;
        inic=0;
    }
    ~Fila(){
        delete(v);
    }
    void insere(Tipo x){
        fim++;
        if(fim == tamanho){
          fim = 0;
        }
        v[fim] = x;
        qtde++;
    }

    void inserirNoInicio(Tipo x){
        if(inic == -1){
            inic = tamanho - 1;
        }
        v[inic]=x;
        qtde++;
    }

    Tipo removerNoFim(){
        Tipo temp = v[fim];
        fim--;
        if(fim == -1){
            fim = tamanho - 1;
        }
        qtde++;
        return temp;
    }

    Tipo mostrarFila(int index){
        return v[index];
    }

    Tipo remover(){
        Tipo temp=v[inic];
        inic++;
        if (inic==tamanho){
            inic=0;
        }
        return temp;
    }
    Tipo primeiro(){
        return v[inic];
    }
    Tipo ultimo(){
        return v[fim];
    }
    bool filacheia(){
        return qtde==tamanho;
    }
    bool filavazia(){
        return qtde==0;
    }
    void limparTela(){
        int time = clock();
        while(clock() - time < 3000){//padrão 3000000
        }
        system("clear");

    }
};

#endif // FILASEQUENCIAL_H_INCLUDED