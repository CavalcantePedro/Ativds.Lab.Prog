#include <iostream>
#include "Casa.h"

using namespace std;

Casa::Casa()
{
    nome = "Casa";
}

void Casa ::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << numPAv << " pavimentos, " << numQuartos << " quartos, "
    << areaTerreno << "m2 de área de terreno e " << areaConstruida << "m2 de área construída. R$ "
    << valor << ".\n";
}

void Casa :: lerAtributos()
{
    Imovel::lerAtributos();
    cin >> numPAv;
    cin >> numQuartos;
    cin >> areaTerreno;
    cin >> areaConstruida;
}
