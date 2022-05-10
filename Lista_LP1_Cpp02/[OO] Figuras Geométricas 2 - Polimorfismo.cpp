#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H
#include <string>
#include <iostream>

#pragma once

class FigurasGeometricas
{
public:
    FigurasGeometricas();
    FigurasGeometricas(int tipo);
    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    std :: string getNome();
    ~FigurasGeometricas();

protected:
    std :: string nome;
    int tipo;

private:

};

#endif

//=================================================================

#ifndef QUADRADO_H
#define QUADRADO_H

#pragma once

class Quadrado : public FigurasGeometricas
{
public:
    Quadrado();
    float calcularArea();
    void lerAtributosArea();
    ~Quadrado();

private:
    float lado;
};

#endif

//=================================================================

#ifndef RETANGULO_H
#define RETANGULO_H


#pragma once

class Retangulo : public FigurasGeometricas
{
public:
    Retangulo();
    float calcularArea();
    void lerAtributosArea();
    ~Retangulo();

private:
    float base;
    float altura;
};

#endif

//=================================================================

#ifndef TRIANGULO_H
#define TRIANGULO_H


#pragma once

class Triangulo : public FigurasGeometricas
{
public:
    Triangulo();
    float calcularArea();
    void lerAtributosArea();
    ~Triangulo();

private:
    float base;
    float altura;
};

#endif

//=================================================================

#ifndef CIRCULO_H
#define CIRCULO_H


#pragma once

class Circulo : public FigurasGeometricas
{
public:
    Circulo();
    float calcularArea();
    void lerAtributosArea();
    ~Circulo();

private:
    float raio;
};

#endif

//=================================================================


FigurasGeometricas::FigurasGeometricas(){}

std :: string FigurasGeometricas :: getNome()
{
    return nome + " polimórfico";
}

FigurasGeometricas :: FigurasGeometricas(int tipo){}


FigurasGeometricas::~FigurasGeometricas(){}

//=================================================================


Quadrado::Quadrado()
:FigurasGeometricas(1)
{
    nome = "Quadrado";
}


float Quadrado ::calcularArea()
{
    return lado*lado;
}

void Quadrado :: lerAtributosArea()
{
    std :: cin >> lado;
}

Quadrado::~Quadrado()
{

}

//=================================================================


Retangulo::Retangulo()
:FigurasGeometricas(2)
{
    nome = "Retângulo";
}
float Retangulo ::calcularArea()
{
    return base*altura;
}

void Retangulo :: lerAtributosArea()
{
    std :: cin >> base;
    std :: cin >> altura;
}

Retangulo::~Retangulo()
{

}

//=================================================================


Triangulo::Triangulo()
:FigurasGeometricas(3)
{
    nome = "Triângulo";
}

float Triangulo ::calcularArea()
{
    return (base*altura)/2;
}

void Triangulo :: lerAtributosArea()
{
    std :: cin >> base;
    std :: cin >> altura;
}

Triangulo::~Triangulo()
{

}

//=================================================================


Circulo::Circulo()
:FigurasGeometricas(4)
{
    nome = "Círculo";
}

float Circulo ::calcularArea()
{
    return 3.14*raio*raio;
}

void Circulo :: lerAtributosArea()
{
    std :: cin >> raio;
}

Circulo::~Circulo()
{

}

//=================================================================

int main()
{
    int tipo;
    std :: cin >> tipo;
    FigurasGeometricas *ptr;


    while (1)
    {
        switch (tipo)
        {
        case 0:
            return 0;
            break;
        case 1:
            ptr = new Quadrado();
            ptr->lerAtributosArea();
            std ::cout << ptr->getNome() << " de área " << ptr->calcularArea() << std::endl;
            break;
        case 2:
            ptr = new Retangulo();
            ptr->lerAtributosArea();
            std ::cout << ptr->getNome() << " de área " << ptr->calcularArea() << std::endl;
            break;
        case 3:
            ptr = new Triangulo();
            ptr->lerAtributosArea();
            std ::cout << ptr->getNome() << " de área " << ptr->calcularArea() << std::endl;
            break;
        case 4:
            ptr = new Circulo();
            ptr->lerAtributosArea();
            std ::cout << ptr->getNome() << " de área " << ptr->calcularArea() << std::endl;
            break;
        default:
            continue;
            break;
        }
        std :: cin >> tipo;
    }
    

    return 0;
}

