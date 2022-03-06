#include <stdio.h>
#include <string.h>

#define TAM_MAX 100

typedef struct 
{
    char cfp[15];
    char nome[TAM_MAX];
    char sobrenome[TAM_MAX];
    char endereco[TAM_MAX];
    char telefone[TAM_MAX];
} pessoa;

void TirarBarraN(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    int n, i;
    scanf("%d%*c", &n);
    pessoa pessoas[n];

    for (i = 0; i < n; i++)
    {
        fgets(pessoas[i].cfp, 15, stdin);
        TirarBarraN(pessoas[i].cfp);
        fgets(pessoas[i].nome, TAM_MAX, stdin);
        TirarBarraN(pessoas[i].nome);
        fgets(pessoas[i].sobrenome, TAM_MAX, stdin);
        TirarBarraN(pessoas[i].sobrenome);
        fgets(pessoas[i].endereco, TAM_MAX, stdin);
        TirarBarraN(pessoas[i].endereco);
        fgets(pessoas[i].telefone, TAM_MAX, stdin);
        TirarBarraN(pessoas[i].telefone);
    }
    
    FILE *arq;
    arq = fopen("pessoas.csv", "w");
    if(arq <=0)
    {
        puts("erro ao abrir o aquivo");
        return 0;
    }
    fprintf(arq,"CPF,nome,snome,endereço,telefone\n");
    for (i = 0; i < n; i++)
    {
        fprintf(arq,"%s,%s,%s,%s,%s\n", pessoas[i].cfp,
        pessoas[i].nome,pessoas[i].sobrenome,pessoas[i].endereco,
        pessoas[i].telefone);
    }
    fclose(arq);

    arq = fopen("pessoas.csv", "r");
    if(arq <=0)
    {
        puts("erro ao abrir o aquivo");
        return 0;
    }
    char leitura[300];
    while (!feof(arq))
    {
        fgets(leitura, 300, arq);
        if(feof(arq))
        {
            break;
        }
        printf("%s", leitura);
    }
    fclose(arq);
}