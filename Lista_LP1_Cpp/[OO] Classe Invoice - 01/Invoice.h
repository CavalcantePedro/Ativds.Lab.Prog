//#ifdef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Invoice
{
    public:
        Invoice();

        int num;
        std :: string desc;
        int quantComp;
        float preco;

        float getInvoiceAmount();
        
};

//#endif 