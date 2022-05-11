#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <iostream>

int main()
{
    int quantP, auxInt;
    float auxFloat;
    std::string auxString;

    Pagamento auxPag;
    ControleDePagamentos ctrlPg;
    std::cin >> quantP;
    ctrlPg.setIndex(quantP);

    for (int i = 0; i < quantP; i++)
    {
        std::cin>>auxFloat;
        auxPag.setPagamento(auxFloat);
        std::cin.ignore();
        std::getline(std::cin,auxString);
        auxPag.setNomeFunc(auxString);
        ctrlPg.setPagamento(auxPag,i);
    }
    
    std::getline(std::cin,auxString);

    if(ctrlPg.getIndexFuncionario(auxString) >= 0)
    {
        auxPag = ctrlPg.getPagamento(ctrlPg.getIndexFuncionario(auxString));

        std::cout <<auxPag.getNomeFunc()<<": R$ "<<auxPag.getPagamento()<<std::endl;
    }
    else
    {
        std::cout <<auxString<<" não encontrado(a)."<<std::endl;
    }

    std::cout <<"Total: R$ "<<ctrlPg.cacularTotalDePagamentos()<<std::endl;

    return 0;
}