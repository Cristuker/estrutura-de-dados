#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED

template <typename Tipo>
struct Lista{
    //definindo as variáveis
    Tipo *v;
    int indice;
    int tamanho;
    int qtde;

    //procedimento responsável por
    Lista(int tam){
        tamanho = tam;
        qtde=0;
        indice=-1;
        v = new Tipo[tamanho];
    }

    //este procedimento libera as posicões
    //de memória alocada pelo ponteiro v (*v)
    ~Lista(){
        delete v;
    }

    //procedimento para inserir um novo
    //elemento na lista
    void inserir(Tipo x){
        indice++;
        v[indice]=x;
        qtde++;
    }

    /*
    função responsável por remover um elemento da
    lista, retornando esse valor à quem chamar.
    */
    Tipo remover(){
        Tipo temp = v[indice];
        indice--;
        return temp;
    }

    //função responsável pela verificação de lista cheia
    bool listacheia(){
        return qtde==tamanho;
    }


    //função responsável pela verificação de lista vazia
    bool listavazia(){
        return qtde==0;
    }
};
#endif // LISTALINEAR_H_INCLUDED
