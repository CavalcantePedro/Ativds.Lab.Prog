#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

#pragma once

class ControleDePagamentos
{
public:
    ControleDePagamentos();

    void setPagamento(Pagamento p, int index);
    Pagamento getPagamento(int pos);
    float cacularTotalDePagamentos();
    int getIndexFuncionario(std::string nomeFuncionario);
    void setIndex(int index);

    ~ControleDePagamentos();

private:
    int index;
    Pagamento pagamentos[15];
};

#endif