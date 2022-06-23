#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora)
{
    this->valorDaHora = valorDaHora;
}


float TrabalhadorPorHora::calcularPagamentoSemanal(){}

TrabalhadorPorHora::~TrabalhadorPorHora(){}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais)
{
    float pagamentoSeman;
    if(horasSemanais>40)
    {
        pagamentoSeman = (valorDaHora*40)+((valorDaHora*1.5)*(horasSemanais-40));
    }
    else
    {
        pagamentoSeman = horasSemanais*valorDaHora;
    }

    return pagamentoSeman;
}