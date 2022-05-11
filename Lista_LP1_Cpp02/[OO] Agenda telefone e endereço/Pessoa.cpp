#include "Pessoa.h"

Pessoa::Pessoa(){}

Pessoa::~Pessoa(){}

Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
{
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

void Pessoa::setEndereco(Endereco endereco)
{
    this->endereco = endereco;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}
    
void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setTelefone(std::string telefone)
{
    this->telefone = telefone;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

std::string Pessoa::toStrig()
{
    return  nome+", "+telefone+"\n"+ endereco.toString()+"\n";
}