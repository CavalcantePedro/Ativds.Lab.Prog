#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

#pragma once

class Pessoa
{
public:
    Pessoa();
    ~Pessoa();
    string getNome();
    string getCpf();
    string getTelefone();
    int getTipo();

    void setNome(string nome);
    void setCpf(string cpf);
    void setTelefone(string telefone);
    void setTipo(int tipo);

private:
int tipo;
string nome, telefone, cpf;


};

#endif