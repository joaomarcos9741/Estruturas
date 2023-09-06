
#include "Pilha.h"
#include <iostream>
using namespace std;

int main()
{
srand(time(NULL));
Pilha *topo = NULL, p;
int op;
int Num;


do{
system("clear");
    cout <<"1. Gerar Numero"<<endl;
    cout <<"2. Esvaziar Pilha"<<endl;
    cout <<"3. Listagem Completa "<<endl;
    cout <<"4. Apresentar menor valor"<<endl;
    cout << "5. Quantidade de número primo" << endl;
    cout <<"6. Sair" << endl;
    cin >> op;
switch(op){
    case 1:
        topo = topo->GerarNum(topo);
    break;

    case 2:
        p.Esvaziar(topo);
    break;

    case 3:
    p.Listar(topo);
    break;

    case 4:
        p.MenorValor(topo);
    break;

    case 5:
        p.Primo(topo);
    break;

    case 6:

    break;


}
  cin.ignore().get();
}while(op != 6);

    return 0;
}
