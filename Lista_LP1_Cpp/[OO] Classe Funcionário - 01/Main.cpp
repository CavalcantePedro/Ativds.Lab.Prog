#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    float salario;
    string nome, sobrenome;
    cin >> n;
    cin.ignore();
    Funcionario arr[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin,nome);
        getline(cin,sobrenome);
        cin >> salario;
        cin.ignore();
        arr[i].primeiroNome = nome;
        arr[i].sobrenome = sobrenome;
        arr[i].salarioMensal = salario;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].primeiroNome <<" "<< arr[i].sobrenome << " - " << arr[i].salarioMensal
        << " - " <<arr[i].getSalarioAnual() << endl;
    }
    
    

}