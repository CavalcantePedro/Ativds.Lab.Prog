#include <stdio.h>

#define TAM_MAX 100

typedef struct 
{
    char modelo[TAM_MAX];
    char marca[TAM_MAX];
    int ano_fabricacao;
    float preco;

}veiculos;

int main()
{
    veiculos c1, c2;
    scanf("%s %s %d %f%*c", c1.modelo, c1.marca, &c1.ano_fabricacao, &c1.preco);
    scanf("%s %s %d %f%*c", c2.modelo, c2.marca, &c2.ano_fabricacao, &c2.preco);

    if(c1.ano_fabricacao < c2.ano_fabricacao)
    {
        printf("%s %s", c1.marca, c1.modelo);
    }
    else if (c2.ano_fabricacao < c1.ano_fabricacao)
    {
        printf("%s %s", c2.marca, c2.modelo);
    }
    else //são iguais
    {
        if(c1.preco < c2.preco)
        {   
            printf("%s %s",c1.marca, c1.modelo);
        }
        else
        {
            printf("%s %s",c2.marca, c2.modelo);
        }   
    }

    return 0; 
}