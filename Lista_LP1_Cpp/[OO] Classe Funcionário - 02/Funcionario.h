#include <string>

using namespace std;

class Funcionario
{
private:
    string primeiroNome, sobrenome;
    float salarioMensal;

public:
    Funcionario();
    Funcionario(string primeiroNome, string sobrenome, float salarioMensal);
    float getSalarioAnual();
    void aumetaSalario(float percent);

    string getPrimeironome();
    void setPrimeironome(string primeiroNome);

    string getSobrenome();
    void setSobrenome(string sobrenome);

    float getSalarioMensal();
    void setSalarioMensal(float salarioMensal);
};
