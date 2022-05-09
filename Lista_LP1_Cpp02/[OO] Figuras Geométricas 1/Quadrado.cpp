#include "Quadrado.h"

Quadrado::Quadrado()
{
    nome = "Quadrado";
    tipo = 1;
}


float Quadrado ::calcularArea()
{
    return lado*lado;
}

void Quadrado :: lerAtributosArea()
{
    std :: cin >> lado;
}

Quadrado::~Quadrado()
{

}