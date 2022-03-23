#include <iostream>
#include "Invoice.h"
#include <stdio.h>

int main()
{
    Invoice in1, in2;

    cin >> in1.num;
    cin.ignore();
    getline (cin,in1.desc);
    cin >> in1.quantComp;
    if (in1.quantComp < 0)
    {
        in1.quantComp = 0;
    }
    cin >> in1.preco;
    if (in1.preco < 0)
    {
        in1.preco = 0;
    }

    cin >> in2.num;
    cin.ignore();
    getline (cin,in2.desc);
    cin >> in2.quantComp;
    if (in2.quantComp < 0)
    {
        in2.quantComp = 0;
    }
    cin >> in2.preco;
    if (in2.preco < 0)
    {
        in2.preco = 0;
    }

    cout << in1.num << "-" << in1.desc << "-" << in1.quantComp << "-" << in1.preco 
    << "-" << in1.getInvoiceAmount() << endl;
    cout << in2.num << "-" << in2.desc << "-" << in2.quantComp << "-" << in2.preco 
    << "-" << in2.getInvoiceAmount() << endl;
}