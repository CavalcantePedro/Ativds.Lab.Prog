#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FigurasGeometricas.h"

#pragma once

class Triangulo : public FigurasGeometricas
{
public:
    Triangulo();
    float calcularArea();
    void lerAtributosArea();
    ~Triangulo();

private:
    float base;
    float altura;
};

#endif