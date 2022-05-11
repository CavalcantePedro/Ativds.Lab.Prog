#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

#pragma once

class Pagamento
{
public:
    Pagamento();
    
    void setPagamento(float valorPagamento);
    float getPagamento();

    void setNomeFunc(std::string nomeDoFuncionario);
    std::string getNomeFunc();

    ~Pagamento();

private:
    float valorPagamento;
    std::string nomeDoFuncionario;
};

#endif