#include "Invoice.h"
#include <string>
#include <iostream>

using namespace std;

Invoice :: Invoice(){}

int Invoice ::getNum()
{
    return num;
}

void Invoice :: setNum(int num)
{
    this ->num = num;
}

std :: string Invoice::getDesc()
{
    return desc;
}

void Invoice :: setDesc(string desc)
{
    this ->desc = desc;
}

int Invoice :: getQuantComp()
{
    return quantComp;
}

void Invoice :: setQuantComp(int quantComp)
{
    this ->quantComp = quantComp;
}

float Invoice ::getPeco()
{
    return preco;
}

void Invoice :: setPreco(float preco)
{
    this -> preco = preco;
}