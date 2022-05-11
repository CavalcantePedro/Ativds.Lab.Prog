#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <string>

#pragma once

class Pessoa
{
public:
    Pessoa();
    Pessoa(std::string nome);
    Pessoa(std::string nome, Endereco endereco, std::string telefone);
    
    void setEndereco(Endereco endereco);
    Endereco getEndereco();
    
    void setNome(std::string nome);
    std::string getNome();

    void setTelefone(std::string telefone);
    std::string getTelefone();

    std::string toStrig();
    ~Pessoa();

private:
    std::string nome;
    Endereco endereco;
    std::string telefone;
};

#endif