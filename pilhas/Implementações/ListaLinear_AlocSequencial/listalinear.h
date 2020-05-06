#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED

template <typename Tipo>
struct Lista{
    //definindo as vari�veis
    Tipo *v;
    int indice;
    int tamanho;
    int qtde;

    //procedimento respons�vel por
    Lista(int tam){
        tamanho = tam;
        qtde=0;
        indice=-1;
        v = new Tipo[tamanho];
    }

    //este procedimento libera as posic�es
    //de mem�ria alocada pelo ponteiro v (*v)
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
    fun��o respons�vel por remover um elemento da
    lista, retornando esse valor � quem chamar.
    */
    Tipo remover(){
        Tipo temp = v[indice];
        indice--;
        return temp;
    }

    //fun��o respons�vel pela verifica��o de lista cheia
    bool listacheia(){
        return qtde==tamanho;
    }


    //fun��o respons�vel pela verifica��o de lista vazia
    bool listavazia(){
        return qtde==0;
    }
};
#endif // LISTALINEAR_H_INCLUDED
