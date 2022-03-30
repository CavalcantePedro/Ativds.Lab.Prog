#include <string>

using namespace std;

class Pessoa
{
    private:
    std :: string nome;
    int idade;
    std :: string telefone;

    public:
    //cosntrutores
    Pessoa();
    
    Pessoa(std :: string nome);

    Pessoa(std :: string nome, int idade, std :: string telefone);

    //metodos set e get
    std :: string getNome();
    void setNome(std :: string nome);

    int getIdade();
    void setIdade(int idade);

    std :: string getTelefone();
    void setTelefone(std :: string teledone);


};