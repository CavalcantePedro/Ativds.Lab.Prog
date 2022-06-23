#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

int main()
{
    int n, tipo, auxInt;
    float auxFloat;
    std::string auxString;
    std::cin>>n;
    std::cin.ignore();
    Trabalhador *trabalhadores;

    for (int i = 0; i < n; i++)
    {
        std::cin>>tipo;
        std::cin.ignore();
        switch (tipo)
        {
        case 1:
            std::getline(std::cin,auxString);
            std::cin >> auxFloat;
            std::cin.ignore();
            trabalhadores = new TrabalhadorAssalariado(auxFloat);
            trabalhadores->setNome(auxString);
            
            std::cout<<trabalhadores->getNome()<<" - "
            << "Semanal: R$ " << trabalhadores->calcularPagamentoSemanal() << " - "
            << "Mensal: R$ " << trabalhadores->getSalario() << std::endl;
            break;
        case 2:
            std::getline(std::cin,auxString);
            std::cin >> auxFloat;
            std::cin.ignore();
            trabalhadores = new TrabalhadorPorHora(auxFloat);
            trabalhadores->setNome(auxString);
            
             std::cout<<trabalhadores->getNome()<<" - "
            << "Semanal: R$ " << trabalhadores->calcularPagamentoSemanal() << " - "
            << "Mensal: R$ " << trabalhadores->getSalario() << std::endl;
            break;
        default:
            break;
        }
    }
    

    return 0;
}