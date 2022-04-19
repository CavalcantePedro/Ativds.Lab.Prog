#include "Data.h"
#include <iostream>

using namespace std;

int main()
{
    Data data;
    cin >> data.dia;
    cin >> data.mes;
    cin >> data.ano;
    cout << data.dia << "/" << data.mes << "/" << data.ano <<endl;
}