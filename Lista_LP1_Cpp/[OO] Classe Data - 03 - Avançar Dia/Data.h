#include <string>

using namespace std;

class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        string getDia();
        string getMes();
        string getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void avancarDia();
        int getDaysMonth(int mes);

    private:
        int dia, mes, ano;
};