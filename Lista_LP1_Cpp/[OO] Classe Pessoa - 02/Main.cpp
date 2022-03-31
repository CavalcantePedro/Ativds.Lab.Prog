#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    int n, idade;
    string nome, telefone, busca;

    cin >> n;
    cin.ignore();
    
    Pessoa arr[n];

   
    for (int i = 0; i < n; i++)
    {
        getline(cin,nome);
        cin >> idade;
        cin.ignore();
        getline(cin,telefone);
        arr[i] = Pessoa(nome, idade, telefone);
        /*
        arr[i].setNome(nome);
        arr[i].setIdade(idade);
        arr[i].setTelefone(telefone);    
        */
    }

    cin >> busca;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].getNome().find(busca) != string::npos) //achou
        {
            cout << arr[i].getNome() << ", " << arr[i].getIdade()
             << ", " << arr[i].getTelefone() << endl;    
        }
        else if(arr[i].getNome().find(busca) == string::npos && i+1 > n) 
        {
            cout << "Pessoa não encontrada";
        }
    }
    
     /*
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].getNome() << "," << arr[i].getIdade() << "," << arr[i].getTelefone() << endl;
    }
    */

}