    #include "Pessoa.h"

    Pessoa::Pessoa()
    {

    }

    Pessoa::~Pessoa()
    {

    }

    string Pessoa::getNome()
    { 
        return nome; 
    }
    string Pessoa::getCpf() 
    { 
        return cpf; 
    }

    string Pessoa::getTelefone()
    {
        return telefone; 
    }

    int Pessoa::getTipo()
    { 
        return tipo; 
    }

    void Pessoa::setNome(string nome)
    { 
        this->nome = nome; 
    }
    void Pessoa::setCpf(string cpf) 
    { 
        this->cpf = cpf; 
    }
    void Pessoa::setTelefone(string telefone)
    { 
        this->telefone = telefone; 
    }
    void Pessoa::setTipo(int tipo) 
    { 
        this->tipo = tipo; 
    }