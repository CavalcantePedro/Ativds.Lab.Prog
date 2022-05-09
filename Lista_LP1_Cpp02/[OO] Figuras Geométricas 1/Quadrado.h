#ifndef QUADRADO_H
#define QUADRADO_H

#include "FigurasGeometricas.h"

#pragma once

class Quadrado : public FigurasGeometricas
{
public:
    Quadrado();
    float calcularArea();
    void lerAtributosArea();
    ~Quadrado();

private:
    float lado;
};

#endif