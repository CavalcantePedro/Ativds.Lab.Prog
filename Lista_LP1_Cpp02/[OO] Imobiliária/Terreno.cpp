#include <iostream>
#include "Terreno.h"

using namespace std;

Terreno::Terreno()
{
    nome = "Terreno";
}

void Terreno ::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout <<area << "m2 de área de terreno. R$ " << valor << ".\n";
}

void Terreno :: lerAtributos()
{
    Imovel::lerAtributos();
    cin >> area;
}