#include "Listar.h"

void Lista :: Listar ( Lista *I ){
    Lista * aux = I;
    while( aux != NULL ){

        std::cout << aux-> Nome << " - " << aux-> Telefone << "\ n";
        aux = aux-> elo;

    }

};

Lista ** Lista :: Inserir( Lista **R, std::string N, std::string T){
    Lista * novo = new Lista () ;
    novo-> Nome = N;
    novo-> Telefone = T;
    if( R[0] == NULL ){
        R[0] = novo ;
        R[1] = novo ;
        R[1]-> elo = NULL ;

    }else{
        Lista * atual = R[0], * ant = NULL ;
        while (( atual != NULL ) && ( novo-> Nome > atual-> Nome )){
            ant = atual ;
            atual = atual-> elo ;

        }
        if( atual == R[0]){
            novo-> elo = R[0];
            R[0] = novo ;

        }else if( atual == NULL ){
            R[1]-> elo = novo ;
            R[1] = novo ;

        }else{
            ant-> elo = novo ;
            novo-> elo = atual ;

        }

    }
    return R;

};

Lista** Lista::Excluir( Lista **R, std::string N, bool *achei ){
    Lista *atual = R[0], * ant = NULL ;
    while (( atual != NULL ) && ( atual-> Nome != N) ){
        ant = atual ;
        atual = atual-> elo;

    }
    if( atual == NULL ){
        *achei = false ;
        return R;

    }else{
        *achei = true ;
        if( atual == R[0]){
            R[0] = R[0]-> elo ;

        }else if( atual == R[1]){
             R [1] = ant;
             R [1]-> elo = NULL ;

        }else{
             ant-> elo = atual-> elo;

        }
         delete ( atual );

    }
     return R;

};

Lista* Lista::Consultar(Lista *I, std::string nome){
    Lista *aux = I;
    while(aux != NULL && aux->Nome != nome)
       aux = aux->elo;

return aux;
}
