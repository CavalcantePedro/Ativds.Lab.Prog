#include "Funcinario.h"
#include "Consultor.h"
#include <iostream>

int main()
{
    int auxInt;
    float auxFloat;
    std :: string aux;

    Funcinario func;
    Consultor consu;

    std::cin >> auxInt;
    func.setMatricula(auxInt);
    std :: cin.ignore();
    getline(std::cin, aux);
    func.setNome(aux);
    std::cin >> auxFloat;
    func.setSalario(auxFloat);
    std::cin >> auxInt;
    consu.setMatricula(auxInt);
    std :: cin.ignore();
    getline(std::cin, aux);
    consu.setNome(aux);
    std::cin >> auxFloat;
    consu.setSalario(auxFloat);

    std::cout << func.getMatricula() <<" - "<<func.getNome()<<" - R$ "<<func.getSalario()<<std::endl;
    std::cout << consu.getMatricula() <<" - "<<consu.getNome()<<" - R$ "<<consu.getSalario()<<std::endl;

    return 0;
}