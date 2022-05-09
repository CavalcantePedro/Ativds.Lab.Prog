#ifndef CIRCULO_H
#define CIRCULO_H

#include "FigurasGeometricas.h"

#pragma once

class Circulo : public FigurasGeometricas
{
public:
    Circulo();
    float calcularArea();
    void lerAtributosArea();
    ~Circulo();

private:
    float raio;
};

#endif