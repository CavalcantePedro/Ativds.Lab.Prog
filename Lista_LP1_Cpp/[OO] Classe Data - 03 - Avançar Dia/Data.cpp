#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int d, int m, int a)
{
    if(m >= 1 && m <= 12)
    {
        mes = m;
    }
    else
    {
        mes = 1;
        cout << "Atributo mês Inválido" << endl;
    }
    if(d >= 1 && d <= getDaysMonth(mes))
    {
        dia = d;
    }
    else
    {
        dia = 1;
        cout << "Atributo dia Inválido" << endl;
    }
    ano = a;

}
string Data::getDia()
{
    if(dia < 10)
    {
        return "0" + to_string(dia);
    }
    return to_string(dia);
}
string Data::getMes()
{
    if(mes < 10)
    {
        return "0" + to_string(mes);
    }
    return to_string(mes);

}
string Data::getAno()
{
    return to_string(ano);
}
void Data::setDia(int d){}

void Data::setMes(int m){}

void Data::setAno(int a){}

int Data::getDaysMonth(int mes)
{
    if(mes == 2)
    {
        return 28;
    }
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        return 31;
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        return 30;
    }
    return 31;
}
void Data::avancarDia()
{
    dia++;

    if(dia > getDaysMonth(mes))
    {
        dia = 1;
        mes++;

        if(mes > 12)
        {
            mes = 1;
            ano++;
        }
    }
}
