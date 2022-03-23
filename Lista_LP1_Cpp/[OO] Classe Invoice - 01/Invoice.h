//#ifdef INVOICE_H
#define INVOICE_H

#include <string>

using namespace std;

class Invoice
{
    public:
        Invoice();

        int num;
        std :: string desc;
        int quantComp;
        double preco;

        float getInvoiceAmount();
        
};

//#endif 