#include <iostream>

using namespace std;

int main()
{
    float salario, emprestimo, nPrestacoes, prct, prestacao;
    cin >> salario;
    while (1)
    {
        if(salario > 0)
        {
            break;
        }
        else
        {
            cin >> salario;
        }
    }
    cin >> emprestimo;
    while (1)
    {
        if(emprestimo > 0)
        {
            break;
        }
        else
        {
            cin >> emprestimo;
        }
    }
    cin >> nPrestacoes;
    while (1)
    {
        if(nPrestacoes > 0)
        {
            break;
        }
        else
        {
            cin >> nPrestacoes;
        }
    }
    prct = salario*0.3;
    prestacao = emprestimo/nPrestacoes;

    if(prestacao > prct)
    {
        cout << "Emprestimo nao pode ser concedido";
    }
    else
    {
        cout << "Emprestimo pode ser concedido";
    }


}