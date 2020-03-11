#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED
template <typename Tipo>

struct Lista{

    Tipo *v;
    int indice;
    int tamanho;
    Lista(int tam){
        indice -1;
        tamanho = tam;
        v = new Tipo[tamanho];
    }

    bool listaVazia(){
        return indice == -1;
    }

    bool listaCheia(){
        return indice == tamanho-1;
    }

    void insere(Tipo x){
        v[++indice] = x;

    }

    Tipo remover(){
        return v[indice'--];
    }
};


#endif // LISTALINEAR_H_INCLUDED
