#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
 salario =0;
}

Trabalhador::~Trabalhador(){}

void Trabalhador::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Trabalhador::getNome()
{
    return nome;
}

void Trabalhador::setSalario(float salario)
{
    this->salario = salario;
}

float Trabalhador::getSalario()
{
    return salario;
}
