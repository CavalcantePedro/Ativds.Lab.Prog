#include "Invoice.h"
#include <string>
#include <iostream>


using namespace std;

Invoice :: Invoice(){}

float Invoice :: getInvoiceAmount()
{
    return preco*quantComp;
}

void Invoice :: print()
{
    cout << num << " - " <<
    desc << " - " << quantComp << 
    " - " << preco 
    << " - " << getInvoiceAmount() << endl;

}

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

float Invoice ::getPreco()
{
    return preco;
}

void Invoice :: setPreco(float preco)
{
    this -> preco = preco;
}