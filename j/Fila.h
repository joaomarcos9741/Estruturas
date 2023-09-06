#include <iostream>
class Fila
{
    public:
    std::string nome;
    int idade, tipo;
    Fila *elo;

        Fila* Inserir(Fila*, std::string, int, int);
        Fila* Excluir(Fila*);
        void Listar(Fila*);
        int Contar(Fila*);
};
