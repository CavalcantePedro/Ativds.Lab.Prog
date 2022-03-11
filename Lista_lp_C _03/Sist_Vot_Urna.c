#include <stdio.h>
#include <string.h>

#define TAM_MAX 50

typedef struct 
{
    char nome [TAM_MAX];
    int numero;
    float quant_votos;
    float prcntg;

} t_candidato;

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
    int quant_candidatos;
    float nulo = 0.0, total = 0.0, maiorPrctg = 0.0;
    scanf("%d%*c", &quant_candidatos);
    t_candidato candidatos [quant_candidatos];

    for (int i = 0; i < quant_candidatos; i++)
    {
        scanf("%d%*c", &candidatos[i].numero);
        fgets(candidatos[i].nome, TAM_MAX,stdin); 
        candidatos[i].quant_votos = 0.0;
    }
      
    while (1)
    {
        float aux;
        int aux2 = 0;
        scanf("%f%*c", &aux);
        if (aux <= 0.0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < quant_candidatos; i++)
            {
                if (candidatos[i].numero == aux)
                {
                    candidatos[i].quant_votos++;
                    total++;
                }
                else
                {
                    aux2++;
                }
            }
            if (aux2 >= quant_candidatos)
            {
                nulo++;
                total++;
                aux2 = 0;
            }
            
        }
    }
   
    for (int i = 0; i < quant_candidatos; i++)
    {
        candidatos[i].prcntg = (candidatos[i].quant_votos*100)/total;
        if(candidatos[i].prcntg > maiorPrctg)
        {
            maiorPrctg = candidatos[i].prcntg;
        } 
    }
    for (int i = 0; i < quant_candidatos; i++)
    {
        TirarBarraN(candidatos[i].nome);
        printf("%.2f - %d - %s", candidatos[i].prcntg,candidatos[i].numero, candidatos[i].nome);
        if (candidatos[i].prcntg == maiorPrctg)
        {
            printf(" VENCEDOR\n");
        }
        else printf("\n");
    }
    printf("%.2f-Nulos\n", (nulo*100)/total);

    return 0;
}