#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>

int main()
{
    std::string auxString;
    Endereco auxEnd;
    std::string rua;
    std::string numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;
    int quantP;

    std::cin >> quantP;
    std::cin.ignore();
    Pessoa pessoa[quantP];

    for (int i = 0; i < quantP; i++)
    {
        getline(std::cin,auxString);
        pessoa[i].setNome(auxString);
        getline(std::cin,auxString);
        pessoa[i].setTelefone(auxString);
        getline(std::cin,rua);
        getline(std::cin,numero);
        getline(std::cin,bairro);
        getline(std::cin,cidade);
        getline(std::cin,estado);
        getline(std::cin,cep);
        auxEnd = Endereco(rua,numero,bairro,cidade,estado,cep);
        pessoa[i].setEndereco(auxEnd);
    }
    
    for (int i = 0; i < quantP; i++)
    {
        std::cout << pessoa[i].toStrig() <<std::endl;
    }
    


    return 0;
}