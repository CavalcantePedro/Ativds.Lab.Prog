#include <string>

using namespace std;

class Funcionario
{
public:
    Funcionario();
    string primeiroNome;
    string sobrenome;
    float salarioMensal;
    float getSalarioAnual();
};

