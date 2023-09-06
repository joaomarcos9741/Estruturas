#include "Fila.h"

using namespace std;
void Menu(){
    cout << "1. Inserir Cliente" <<endl;
    cout << "2. Excluir Cliente" <<endl;
    cout << "3. Listar Clientes Preferenciais" <<endl;
    cout << "4. Listar Clientes Comuns" <<endl;
    cout << "5. Listar quantidade de Clientes Preferenciais" <<endl;
    cout << "6. Listar quantidade de Clientes Comuns" <<endl;
    cout << "7. Sair" <<endl;
    cout <<"Escolha uma opção"<< endl;
};

int main()
{
    Fila *IniPref, *FimPref, *IniComum, *FimComum, b;
    IniPref = NULL;
    FimPref = NULL;
    IniComum = NULL;
    FimComum = NULL;
    string nome;
    int idade, tipo, op;
    do{
    Menu();
    cin >> op;
    switch(op){
        case 1:
        cout <<"Digite um nome: "<<endl;
        cin.ignore();
        getline(cin,nome);
        cout << "Digite sua idade: \n";
        cin >> idade;
        if(idade >= 60) {
            FimPref = b.Inserir(FimPref, nome, idade, 1);
            if(IniPref == NULL){
                IniPref = FimPref;
            }
        }else{
            FimComum = b.Inserir(FimComum, nome, idade, 2);
            if(IniComum == NULL){
                IniComum = FimComum;
            }
        }
        cout << "Sucesso!!" << endl;
        break;


        case 2:
        cout << "Escolha a fila que vc que escluir: " << endl;
        cin>>tipo;
        if (tipo == 1){
            IniPref = b.Excluir(IniPref);
            cout << "Pessoa da fila preferencial excluida!" <<endl;
        }else{
            IniComum = b.Excluir(IniComum);
            cout <<"Pessoa da fila comum excluida!" <<endl;
        }
        break;

        case 3:
            b.Listar(IniPref);
        break;


        case 4:
            b.Listar(IniComum);

        break;

        case 5:
            cout << "A quantidade de pessoas da fila preferencial e: " <<b.Contar(IniPref)<< endl;

            break;

            case 6:
            cout << "A quantidade de pessoas da fila comum e: "<<b.Contar(IniComum)<<endl;

            break;

            default:
            cout << "Invalido!!" << endl;


    }
    cin.ignore().get();
    system("clear");

  }while(op != 7);


    return 0;
}
