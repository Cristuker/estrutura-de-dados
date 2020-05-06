#ifndef PILHASEQUENCIAL_H_INCLUDED
#define PILHASEQUENCIAL_H_INCLUDED

template <typename Tipo>
struct Pilha{
    //declarando as variáveis
    Tipo *v;
    int topo;
    int tamanho;

    //este procedimento inicializa uma
    //variável do tipo Pilha
    Pilha(int tam){
        tamanho=tam;
        topo=-1;
        v = new Tipo[tamanho];
    }
    //este procedimento libera as posicões
    //de memória alocada pelo ponteiro v (*v)
    ~Pilha(){
        delete v;
    }
    //procedimento para empilhar um novo
    //elemento na pilha
    void empilha(Tipo x){
        topo++;
        v[topo]=x;
    }
    /*
    função responsável por remover (desempilhar)
    um elemento da pilha, retornando esse valor
    à quem chamor.
    */
    Tipo desempilha(){
        Tipo temp=v[topo];
        topo--;
        return temp;
    }

    /**
        função responsável por retornar
        o elemento do topo da pilha
     */
    Tipo elementodotopo(){
        return v[topo];
    }

    /*
    função responsável pela verificação
    de pilha cheia
    */
    bool pilhacheia(){
        return topo==tamanho-1;
    }

    /**
    função responsável pela verificação
    de pilha vazia
    */
    bool pilhavazia(){
        return  topo==-1;
    }
};

#endif // PILHASEQUENCIAL_H_INCLUDED
