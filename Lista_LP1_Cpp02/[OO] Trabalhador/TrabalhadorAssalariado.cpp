#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(float salario)
{
    this->salario = salario;
}

float Trabalhador::calcularPagamentoSemanal()
{
    return salario/4;
}

float Trabalhador::calcularPagamentoSemanal(int){}

TrabalhadorAssalariado::~TrabalhadorAssalariado(){}