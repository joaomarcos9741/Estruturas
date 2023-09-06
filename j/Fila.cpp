#include "Fila.h"

Fila* Fila::Inserir(Fila *F, std::string N, int I, int T){
    Fila *novo = new Fila();
    novo->nome = N;
    novo->idade = I;
    novo->tipo = T;
    if(F != NULL){
        F->elo = novo ;

    }
    F = novo;
    F->elo = NULL;
    return F;

};


Fila* Fila::Excluir(Fila* I){
    Fila *aux = I;
    I = I->elo;
    delete(aux);
    return I;
};



void Fila::Listar(Fila *I){
    Fila *aux = I;
    while(aux != NULL){
        std::cout << aux ->nome <<std::endl;
        std::cout << aux ->idade <<std::endl;
        aux = aux->elo;

    }
};


int Fila::Contar(Fila *I){
    Fila *aux = I;
    int qnt;
    while(aux != NULL){
        qnt++;
        aux = aux->elo;
    }
    return qnt;
};

