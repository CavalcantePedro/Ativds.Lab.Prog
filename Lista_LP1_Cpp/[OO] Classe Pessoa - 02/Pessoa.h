#include <string>

using namespace std;

class Pessoa
{
    private:
    string nome;
    int idade;
    string telefone;

    public:
    //cosntrutores
    Pessoa();
    
    //metodos set e get
    string getNome();
    void setNome(string nome);

    int getIdade();
    void setIdade(int idade);

    string getTelefone();
    void setTelefone(string teledone);


};