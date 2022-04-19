#include "Funcionario.h"

Funcionario ::Funcionario(){}

float Funcionario :: getSalarioAnual()
{
    return salarioMensal * 12;
}