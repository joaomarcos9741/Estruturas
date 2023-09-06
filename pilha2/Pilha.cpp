#include "Pilha.h"

Pilha* Pilha::CadastrarNum(Pilha *topo, int Num){
    Pilha *aux = new Pilha();
    aux->Num = Num;
    aux->elo = topo;
    return topo;
};


Pilha* Pilha::GerarNum(Pilha *topo){
topo = NULL;
    int num;
    while(true){
        num = (rand()%10)+1;
        if(num != 10){
            topo = CadastrarNum(topo, num);
        }else{
            break;
        }
    }
    return topo;

};


Pilha* Pilha::Esvaziar(Pilha *topo){
    Pilha *aux = topo;
    while(aux != NULL){
        topo = aux->elo;
        delete aux;
        aux = topo;
    }
    return topo;
}


void Pilha::Listar(Pilha *topo){
    while(topo != NULL){
        std::cout << topo->Num << "   ";
        topo = topo->elo;
    }
    std::cout << std::endl;
};




void MenorValor(Pilha *topo){
    Pilha *aux = topo;
    Pilha *M = topo;

    while(aux != NULL){
        if(M->Num < aux->Num){
            M->Num = aux->Num;
        }else{
            aux->elo = topo;
        }

    }

};

int Pilha::Primo(Pilha *topo){
    Pilha *aux = topo;
    int qtd = 0;
    while(aux != NULL){
        if(VerificaPrimo(aux->Num)){
            qtd++;
        }
    }
    return qtd;
};


bool Pilha::VerificaPrimo(int Num){
    for(int i=Num-1; i>1; i--){
        if(Num%i == 0){
            return false;
        }
    }
    return true;
};
