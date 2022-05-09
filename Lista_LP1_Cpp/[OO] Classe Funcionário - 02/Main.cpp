#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome, sobrenome;
    float salario;
    int n;
    cin >> n;
    cin.ignore();
    Funcionario funcionarios[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,nome);
        getline(cin,sobrenome);
        cin >> salario;
        cin.ignore();
        funcionarios[i] = Funcionario(nome,sobrenome,salario);
    }
    for (int i = 0; i < n; i++)
    {
        cout << funcionarios[i].getPrimeironome() << " " << funcionarios[i].getSobrenome() 
        << " - " << funcionarios[i].getSalarioMensal() << " - " << funcionarios[i].getSalarioAnual()
        << endl;
        funcionarios[i].aumetaSalario(0.1);
        cout << funcionarios[i].getSalarioAnual()<<endl;
    }
    
    
}