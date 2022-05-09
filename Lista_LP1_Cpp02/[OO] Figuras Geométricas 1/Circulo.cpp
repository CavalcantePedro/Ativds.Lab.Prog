#include "Circulo.h"

Circulo::Circulo()
{
    nome = "Circulo";
    tipo = 4;
}

float Circulo ::calcularArea()
{
    return 3.14*raio*raio;
}

void Circulo :: lerAtributosArea()
{
    std :: cin >> raio;
}

Circulo::~Circulo()
{

}