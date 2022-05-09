#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H
#include <string>
#include <iostream>

#pragma once

class FigurasGeometricas
{
public:
    FigurasGeometricas();
    FigurasGeometricas(int tipo, std :: string nome);
    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    std :: string getNome();
    ~FigurasGeometricas();

protected:
    std :: string nome;
    int tipo;

private:

};

#endif