#include <string>
#include "Pessoa.h"
#include <iostream>


using namespace std;

Pessoa :: Pessoa(){}

Pessoa :: Pessoa(std :: string nome)
{
    this -> nome = nome;
}

Pessoa :: Pessoa(std :: string nome, int idade, std :: string telefone)
{
    this -> nome = nome;
    this -> idade = idade;
    this -> telefone = telefone;
}

std :: string Pessoa :: getNome()
{
    return nome;
}
void Pessoa::setNome(std :: string nome)
{

    this -> nome = nome;
}

int Pessoa ::getIdade()
{
    return idade;
}
void Pessoa ::setIdade(int idade)
{
    this -> idade = idade;
}

std :: string Pessoa :: getTelefone()
{
    return telefone;
}
void Pessoa::setTelefone(std :: string telefone)
{
    this -> telefone = telefone;
}

