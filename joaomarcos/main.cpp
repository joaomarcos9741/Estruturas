#include "Listar.h"

using namespace std;

void Menu ()
{
    system (" clear ");
    cout << "1 - Inserir \n";
    cout << "2 - Listar \n";
    cout << "3 - Excluir \n";
    cout << "4 - Consultar \n";
    cout << "5 - Sair \n";
    cout << " Informe sua opção : ";
}

int main (){
    Lista **P, L, *consultar;
    P = new Lista *[2];
    P [0] = NULL ;
    P [1] = NULL ;
    string nome, telefone;
    int op ;
    bool achei ;
    char escolha;
    do{
        Menu () ;
        cin >> op ;
        switch ( op ){
        case 1:
            cout << " Informe o nome: ";
            cin. ignore () ;
            getline( cin, nome ) ;
            cout << " informe o telefone: ";
            getline( cin, telefone);
            P = L. Inserir(P, nome, telefone);
            cout << " Inserido com sucesso !!\n ";
            break ;
        case 2:
            if(P [0] == NULL ){
                cout << " Lista vazia !\n";
            }
            else{

                cout << " Lista de contatos\n\n";
                L. Listar (P [0]) ;
            }
            break ;
        case 3:
            if(P [0] == NULL ){
                cout << " Lista vazia !\n";
            }
            else{
                cout << " Informe o nome a ser excluido: ";
                cin . ignore () ;
                getline( cin, nome );
                P = L. Excluir(P, nome, & achei );
                if( achei )
                    cout << " Excluido com sucesso!\n ";
                else
                    cout << " Contato não localizado!\n";
            }
            break ;
            case 4:
                cout << "Informe um nome para ser consltado: " << endl;
                cin.ignore();
                getline( cin, nome );
                consultar = L.Consultar(P[0],nome);

                if(consultar != NULL){
                    cout << "Nome: " << consultar->Nome << "\nNumero de telefone: " << consultar->Telefone;
                }else{
                    cout <<"Voce deseja inserir? " << endl;
                    cin>> escolha;
                    if(escolha == 'S' || escolha == 's'){
                        cout << " informe o telefone: ";
                        cin.ignore();
                        getline( cin, telefone);
                        P = L. Inserir(P, nome, telefone);
                        cout << " Inserido com sucesso !!\n ";
                    }else{
                        cout << "Nada foi inserido! " << endl;
                    }
                }



                break;

        case 5:
            cout << " Tchau !\n";
            break ;
        default:
            cout << " Opção inválida !\n ";
        }
        cin . ignore () . get () ;
    }
    while( op != 5) ;
    return 0;
}


