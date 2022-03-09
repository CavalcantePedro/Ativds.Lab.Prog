#include <stdio.h>

#define TAM_MAX 50

typedef struct 
{
    char nome[TAM_MAX];
    int numero;
    float quantVotos;

}t_candidato;

void TirarBarraN(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    int quantCan, aux =0, votosT = 0, votosN = 0;
    scanf("%d%*C", &quantCan);
    t_candidato candidatos[quantCan];
    
    for (int i = 0; i < quantCan; i++)
    {
        fgets(candidatos[i].nome, TAM_MAX, stdin);
        TirarBarraN(candidatos[i].nome);
        scanf("%d%*c", &candidatos[i].numero);
        candidatos[i].quantVotos = 0;
    }
    while (1)
    {
        scanf("%d", &aux);
        if(aux <= 0)
        {
            for (int i = 0; i < quantCan; i++)
            {
                if (aux == candidatos[i].numero)
                {
                    candidatos[i].quantVotos++;
                }
                else 
                {
                    votosN++;
                }
            }
        }
        else
        {
            break;
        } 
        votosT++;
    }
    


    return 0;
}