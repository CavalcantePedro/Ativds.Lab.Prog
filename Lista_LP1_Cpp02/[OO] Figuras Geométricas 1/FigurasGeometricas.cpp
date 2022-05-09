#include "FigurasGeometricas.h"

FigurasGeometricas::FigurasGeometricas(){}

std :: string FigurasGeometricas :: getNome()
{
    return nome;
}

FigurasGeometricas :: FigurasGeometricas(int tipo, std :: string nome)
{
    this -> tipo = tipo;
    this -> nome = nome;
}

float FigurasGeometricas :: calcularArea()
{
    return 0;
}

void FigurasGeometricas :: lerAtributosArea(){}

FigurasGeometricas::~FigurasGeometricas(){}