#include <string>
#include "Pessoa.h"
#include <iostream>


using namespace std;

Pessoa :: Pessoa(){}

string Pessoa :: getNome()
{
    return nome;
}
void Pessoa::setNome(string nome)
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

string Pessoa :: getTelefone()
{
    return telefone;
}
void Pessoa::setTelefone(string telefone)
{
    this -> telefone = telefone;
}

