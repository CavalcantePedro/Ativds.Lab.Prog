#include "Data.h"
#include <iostream>

using namespace std;

int main()
{
    Data data;
    int dia, mes, ano, qtd;

    cin >> dia;
    cin >> mes;
    cin >> ano;
    cin >> qtd;

    data = Data(dia,mes,ano);
    for(int i = 0; i < qtd; i++){
        data.avancarDia();
    }

    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno();
}