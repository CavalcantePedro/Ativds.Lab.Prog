#include "Imovel.h"

class Apartamento : public Imovel
{
private:
    float area;
    int numQuartos;
    int andar;
    float valorCond;
    int vagas;

public:
    Apartamento();
    void exibeAtributos();
    void lerAtributos();
};