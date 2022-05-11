#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#pragma once

class Endereco
{
public:
    Endereco();
    Endereco(std::string rua,std::string numero,std::string bairro,std::string cidade,std::string estado,std::string cep);
    std::string toString();
    ~Endereco();

private:
    std::string rua;
    std::string numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;

};

#endif