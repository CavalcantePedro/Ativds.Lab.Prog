#include "Consultor.h"

Consultor::Consultor(){}

Consultor::~Consultor(){}

float Consultor :: getSalario()
{
    return this->salario += salario*0.1;
}

float Consultor :: getSalario(double percent)
{
    return this->salario += salario*(0.1+percent);
}
