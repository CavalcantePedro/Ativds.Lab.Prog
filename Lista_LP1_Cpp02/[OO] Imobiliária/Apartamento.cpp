#include <iostream>
#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento()
{
    nome = "Apartamento";

}

void Apartamento ::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << area << "m2 de área, " << numQuartos<< " quartos, "
    << andar << " andar(es), " << valorCond << " de condomínio, " 
    << vagas << " vaga(s) de garagem. R$ "
    << valor << ".\n";
}

void Apartamento :: lerAtributos()
{
    Imovel::lerAtributos();
    cin >> area;
    cin >> numQuartos;
    cin >> andar;
    cin >> valorCond;
    cin >> vagas;
}
