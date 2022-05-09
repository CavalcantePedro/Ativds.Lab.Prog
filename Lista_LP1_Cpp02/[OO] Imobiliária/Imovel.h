#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel
{
  
    public:
        Imovel();
        void exibeAtributos();
        void lerAtributos();
    
    protected:
        std :: string nome;
        float valor;
        std :: string tipo;
        std :: string aluguelOUvenda;

};

#endif