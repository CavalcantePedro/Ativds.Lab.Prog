#include "Data.h"
#include <iostream>

using namespace std;

Data :: Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

void Data :: printData()
{
    cout << dia << " ";
    switch (mes)
    {
    case 1:
        cout << "de Janeiro de "; 
        break;
    case 2:
        cout << "de Fevereiro de "; 
        break;
    case 3:
        cout << "de Março de "; 
        break;
    case 4:
        cout << "de Abril de "; 
        break;
    case 5:
        cout << "de Maio de "; 
        break;
    case 6:
        cout << "de Junho de "; 
        break;
    case 7:
        cout << "de Julho de "; 
        break;
    case 8:
        cout << "de Agosto de "; 
        break;
    case 9:
        cout << "de Setembro de "; 
        break;
    case 10:
        cout << "de Outubro de "; 
        break;
    case 11:
        cout << "de Novembro de "; 
        break;
    case 12:
        cout << "de Dezembro de "; 
        break;
    default:
        cout << "de Indefinido de ";
        break;
    }
    cout << ano;
}

int Data :: getDia()
{
    return dia;
}

void Data ::setDia(int dia)
{
    this -> dia = dia;
}

int Data :: getMes()
{
    return mes;
}

void Data ::setMes(int mes)
{
    this -> mes = mes;
}

int Data :: getAno()
{
    return ano;
}

void Data ::setAno(int ano)
{
    this -> ano = ano;
}