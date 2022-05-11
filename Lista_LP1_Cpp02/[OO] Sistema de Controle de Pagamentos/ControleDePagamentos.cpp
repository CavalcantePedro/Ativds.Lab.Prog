#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos(){}

ControleDePagamentos::~ControleDePagamentos(){}

void ControleDePagamentos::setIndex(int index)
{
    this->index=index;
}

void ControleDePagamentos::setPagamento(Pagamento p, int index)
{
    pagamentos[index] = p; 
}

Pagamento ControleDePagamentos::getPagamento(int pos)
{
    return pagamentos[pos];
}

float ControleDePagamentos::cacularTotalDePagamentos()
{
    float soma =0;

    for (int i = 0; i < index; i++)
    {
        soma+= pagamentos[i].getPagamento();
    }
    return soma;
    
}

int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario)
{
    int retorno = -1;
    for (int i = 0; i < index; i++)
    {
        if(pagamentos[i].getNomeFunc().find(nomeFuncionario) != -1)
        {
            retorno = i;
        }
    }
    return retorno;
}