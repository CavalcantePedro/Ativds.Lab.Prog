#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcinario.h"

#pragma once

class Consultor:public Funcinario
{
public:
    Consultor();
    float getSalario();
    float getSalario(double percent);
    ~Consultor();

private:

};

#endif