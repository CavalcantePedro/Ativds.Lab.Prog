#include "Imovel.h"

class Terreno : public Imovel
{
private:
    float area;
    
public:
    Terreno();
    void exibeAtributos();
    void lerAtributos();
};