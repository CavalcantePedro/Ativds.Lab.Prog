#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>


#pragma once

class Trabalhador
{
public:
    Trabalhador();
    
    void setNome(std::string nome);
    std::string getNome();

    void setSalario(float salario);
    float getSalario();

    virtual float calcularPagamentoSemanal() = 0;
    virtual float calcularPagamentoSemanal(int horasSemanais) = 0;

    ~Trabalhador();

protected:
    std::string nome;
    float salario;

private:

};

#endif