#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorPagamento = 0;
}

Pagamento::~Pagamento(){}

void Pagamento::setPagamento(float valorPagamento)
{
    this->valorPagamento = valorPagamento;
}

float Pagamento::getPagamento()
{
    return valorPagamento;
}

void  Pagamento::setNomeFunc(std::string nomeDoFuncionario)
{
    this->nomeDoFuncionario =nomeDoFuncionario;
}

std::string Pagamento::getNomeFunc()
{
    return nomeDoFuncionario;
}