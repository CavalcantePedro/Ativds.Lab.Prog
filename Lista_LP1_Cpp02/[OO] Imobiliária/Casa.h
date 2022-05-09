#include "Imovel.h"

class Casa : public Imovel
{
    private:
        int numPAv;
        int numQuartos;
        float areaTerreno;
        float areaConstruida;

    public:
        Casa();
        void exibeAtributos();
        void lerAtributos();
};