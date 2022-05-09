#ifndef RETANGULO_H
#define RETANGULO_H

#include "FigurasGeometricas.h"

#pragma once

class Retangulo : public FigurasGeometricas
{
public:
    Retangulo();
    float calcularArea();
    void lerAtributosArea();
    ~Retangulo();

private:
    float base;
    float altura;
};

#endif