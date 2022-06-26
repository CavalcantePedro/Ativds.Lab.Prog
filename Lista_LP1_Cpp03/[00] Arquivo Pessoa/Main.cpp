#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Pessoa.h"

using namespace std;

void geraArquivo(string path, string data) 
{
    fstream fs;
    fs.open(path.c_str(), fstream::out);
    if (fs.is_open())
    { 
        fs.write(data.c_str(), data.size());
        fs.close();
    }
    else cout <<"Nao foi possivel abrir o arquivo " << path;
}

void geraArquivos()
{
    string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                    "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"   
                    "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n" 
                    "1\nDenis Carlos\n(83) 5555-5555\n"; 
                    
    string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                    "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                    "1\nJonas Luz\n(83) 3333-3333\n";
                
    geraArquivo("dados01.txt", data1);
    geraArquivo("dados02.txt", data2);
}

int main()
{
    vector <Pessoa *> pessoas;
    Pessoa *p;
    fstream fs;
    string nomeArq, cpf, telefone, nome;
    int tipo;
    geraArquivos();
    getline(cin, nomeArq);
    fs.open(nomeArq, fstream::in);
    if (!fs.is_open()) 
    {
        cout << "Erro ao abrir arquivo para leitura\n";
    }
    while (!fs.eof()) 
    {
        fs >> tipo;
        if (fs.eof())
        {
            break;
        }
        
        fs.ignore();
        switch (tipo)
        {
        case 1:
            getline(fs,nome);
            getline(fs,telefone);
            break;
        case 2:
            getline(fs,nome);
            getline(fs,telefone);
            getline(fs,cpf);
            break;
        default:
            break;
        }
        p = new Pessoa();
        p->setTipo(tipo);
        p->setNome(nome);
        p->setTelefone(telefone);
        p->setCpf(cpf);
        pessoas.push_back(p);
    }
    for (int i = 0; i < pessoas.size(); i++)
    {
        switch (pessoas[i]->getTipo())
        {
        case 1:
            cout<<pessoas[i]->getNome()+", tel: "+pessoas[i]->getTelefone()<<endl;
            break;
        
        case 2:
            cout<<pessoas[i]->getNome()+", tel: "+pessoas[i]->getTelefone()+", CPF: "+pessoas[i]->getCpf()<<endl;
            break;
        default:
            break;
        }
    }
    
    return 0;
}