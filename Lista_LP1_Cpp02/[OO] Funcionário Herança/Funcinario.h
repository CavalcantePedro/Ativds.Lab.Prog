#ifndef FUNCINARIO_H
#define FUNCINARIO_H
#include <string>

#pragma once

class Funcinario
{
public:
    Funcinario();
    
    int getMatricula();
    void setMatricula(int matricula);

    std :: string getNome();
    void setNome(std :: string nome);

    virtual float getSalario();
    void setSalario(float salario);
    
    ~Funcinario();
protected:
    int matricula;
    std :: string nome;
    float salario;

private:

};

#endif