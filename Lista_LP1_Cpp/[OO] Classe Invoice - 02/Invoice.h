#include <string>

using namespace std;

class Invoice
{
    private:
        int num;
        std :: string desc;
        int quantComp;
        float preco;
    
    public:
        Invoice();
        
        int getNum();
        void setNum(int num);
        
        std :: string getDesc();
        void setDesc(string desc);
        
        int getQuantComp();
        void setQuantComp(int quantComp);
        
        float getPeco();
        void setPreco(float preco);

        
        float getInvoiceAmount();
        void print();  

};