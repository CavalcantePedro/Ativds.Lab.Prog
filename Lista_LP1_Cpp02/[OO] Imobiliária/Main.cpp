#include <iostream>
#include "Terreno.h"
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"

using namespace std;

int main()
{
    int tipo, N;
    Apartamento ap;
    Casa casa;
    Terreno ter;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> tipo;
        switch (tipo)
        {
        case 1:
            casa.lerAtributos();
            casa.exibeAtributos();
            break;
        
        case 2:
            ap.lerAtributos();
            ap.exibeAtributos();
            break;
        
        case 3:
            ter.lerAtributos();
            ter.exibeAtributos();
            break;
        default:
            break;
        }
    }
}