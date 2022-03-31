#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice[2];
    int num, quantComp;
    float preco;
    string desc;

    for (int i = 0; i < 2; i++)
    {
        cin >> num;
        cin.ignore();
        getline(cin,desc);
        cin >> quantComp;
        if(quantComp < 0)
        {
            quantComp = 0;
        }
        cin >> preco;
        if (preco < 0)
        {
            preco = 0;
        }
        invoice[i].setNum(num);
        invoice[i].setDesc(desc);
        invoice[i].setQuantComp(quantComp);
        invoice[i].setPreco(preco);   
    }
    for (int i = 0; i < 2; i++)
    {
        invoice[i].print();
    }
    
}