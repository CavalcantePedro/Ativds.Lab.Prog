#include "Triangulo.h"

Triangulo::Triangulo()
{
    nome = "Triangulo";
    tipo = 2;
}

float Triangulo ::calcularArea()
{
    return (base*altura)/2;
}

void Triangulo :: lerAtributosArea()
{
    std :: cin >> base;
    std :: cin >> altura;
}

Triangulo::~Triangulo()
{

}