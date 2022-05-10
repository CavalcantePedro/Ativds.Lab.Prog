#include "Funcinario.h"

Funcinario :: Funcinario(){}
Funcinario :: ~Funcinario(){}

void Funcinario :: setMatricula(int matricula)
{
    this->matricula = matricula;
}
int Funcinario::getMatricula()
{
    return matricula;
}

void Funcinario::setNome(std::string nome)
{
    this->nome = nome;
}
std::string Funcinario::getNome()
{
    return nome;
}

void Funcinario::setSalario(float salario)
{
    this->salario = salario;
}
float Funcinario::getSalario()
{
    return salario;
}