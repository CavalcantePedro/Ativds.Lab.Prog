#include "Data.h"
#include <iostream>

using namespace std;

int main()
{
    Data data;
    int dia,mes,ano;
    cin >> dia;
    cin >> mes;
    cin >> ano;
    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
    data.printData();
}