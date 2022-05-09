#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario :: Funcionario(){};

Funcionario :: Funcionario(string primeiroNome, string sobrenome, float salarioMensal)
{
    this -> primeiroNome = primeiroNome;
    this -> sobrenome = sobrenome;
    if (salarioMensal >= 0)
    {
        this -> salarioMensal = salarioMensal;
    }
}
float Funcionario :: getSalarioAnual()
{
    return salarioMensal * 12;
}

void Funcionario :: aumetaSalario(float percent)
{
    salarioMensal += salarioMensal*percent;
}

string Funcionario :: getPrimeironome()
{
    return primeiroNome;
}
void Funcionario :: setPrimeironome(string primeiroNome)
{
    this -> primeiroNome = primeiroNome;
}

string Funcionario :: getSobrenome()
{
    return sobrenome;
}
void Funcionario :: setSobrenome(string sobrenome)
{
    this -> sobrenome = sobrenome;
}

float Funcionario :: getSalarioMensal()
{
    return salarioMensal;
}
void Funcionario :: setSalarioMensal(float salarioMensal)
{
    this -> salarioMensal = salarioMensal;
}

