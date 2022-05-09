#include "Imovel.h"
#include <iostream>


using namespace std;

Imovel::Imovel()
{
    
}

void Imovel :: exibeAtributos()
{
    cout << nome << " para " << aluguelOUvenda << ". ";
}

void Imovel :: lerAtributos()
{
    cin >> valor;
    cin >> aluguelOUvenda;
}