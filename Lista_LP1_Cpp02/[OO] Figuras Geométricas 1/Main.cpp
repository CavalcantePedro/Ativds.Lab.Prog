#include "FigurasGeometricas.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
    int tipo;
    cin >> tipo;
    auto quad = new Quadrado();
    auto ret = new Retangulo();
    auto tri = new Triangulo();
    auto cir = new Circulo();


    while (1)
    {
        switch (tipo)
        {
        case 0:
            return 0;
            break;
        case 1:
            quad->lerAtributosArea();
            cout << quad->getNome() << " de área " << quad->calcularArea() << endl;
            break;
        case 2:
            ret->lerAtributosArea();
            cout << ret->getNome() << " de área " << ret->calcularArea() << endl;
            break;
        case 3:
            tri->lerAtributosArea();
            cout << tri->getNome() << " de área " << tri->calcularArea() << endl;
            break;
        case 4:
            cir->lerAtributosArea();
            cout << cir->getNome() << " de área " << cir->calcularArea() << endl;
            break;
        default:
            continue;
            break;
        }
        cin >> tipo;
    }
    

    return 0;
}