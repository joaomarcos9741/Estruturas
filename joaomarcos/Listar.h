#include<iostream>

class Lista{
public :
    std :: string Nome, Telefone;
    Lista * elo ;
    Lista** Inserir( Lista**, std::string, std::string ) ;
    void Listar ( Lista*) ;
    Lista** Excluir( Lista**, std::string, bool *) ;
    Lista* Consultar(Lista*, std::string);

};
