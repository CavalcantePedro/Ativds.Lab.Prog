#include <stdio.h>
#include <string.h>

#define TAM_MAX 100

typedef struct
{   
    char nome_completo [TAM_MAX];
    int idade;
    int chute_a_gol;
    int gols;

} jogadores;

void TirarBarraN(char* str)
{
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]=='\n')
        {
            str[i] = '\0';
        }
    }
}

int main()
{
    jogadores j1, j2;
    int resultJ1, resultJ2;
    
    fgets(j1.nome_completo, TAM_MAX, stdin);
    scanf("%d %d %d%*c", &j1.idade, &j1.chute_a_gol, &j1.gols);
    fgets(j2.nome_completo, TAM_MAX, stdin);
    scanf("%d %d %d", &j2.idade, &j2.chute_a_gol, &j2.gols);

    resultJ1 = j1.chute_a_gol - j1.gols;
    resultJ2 = j2.chute_a_gol - j2.gols;

    TirarBarraN(j1.nome_completo);
    TirarBarraN(j2.nome_completo);
    
    if (resultJ1 > resultJ2)
    {
        printf("%s (%d)", j2.nome_completo, j2.idade);
    }
    else
    {
        printf("%s (%d)", j1.nome_completo, j1.idade);
    }
    
    return 0;
}