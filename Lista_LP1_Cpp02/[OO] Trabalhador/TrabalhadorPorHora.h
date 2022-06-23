#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

#pragma once

class TrabalhadorPorHora: public  Trabalhador
{
public:
    TrabalhadorPorHora(float valorDaHora);
    float calcularPagamentoSemanal(int horasSemanais);
    float calcularPagamentoSemanal();
    ~TrabalhadorPorHora();

private:
    float valorDaHora;
};

#endif