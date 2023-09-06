#include <iostream>
class Pilha
{
public:
    int Num;
    Pilha *elo;


    Pilha* CadastrarNum(Pilha*, int);
    Pilha* GerarNum(Pilha*);
    Pilha* Esvaziar(Pilha*);
    void Listar(Pilha*);
    void MenorValor(Pilha*);
    int Primo(Pilha*);
    bool VerificaPrimo(int Num);




};

