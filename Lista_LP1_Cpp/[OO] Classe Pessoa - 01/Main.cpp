#include <iostream>
#include <string>
#include "Pessoa.h"

#define QUANTPESSOAS 2

using namespace std;

int main()
{
    int idade;
    string nome, telefone, busca;
    Pessoa arr[QUANTPESSOAS];

    for (int i = 0; i < 2; i++)
    {
        getline(cin,nome);
        cin >> idade;
        cin.ignore();
        getline(cin,telefone);
        arr[i].nome = nome;
        arr[i].idade = idade;
        arr[i].telefone = telefone;
    }
    for (int i = 0; i < QUANTPESSOAS; i++)
    { 
        cout << arr[i].nome << ", " << arr[i].idade
         << ", " << arr[i].telefone << endl;  
    }

}