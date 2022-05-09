#include "Retangulo.h"

Retangulo::Retangulo()
{
    nome = "Retangulo";
    tipo = 2;
}
float Retangulo ::calcularArea()
{
    return base*altura;
}

void Retangulo :: lerAtributosArea()
{
    std :: cin >> base;
    std :: cin >> altura;
}

Retangulo::~Retangulo()
{

}