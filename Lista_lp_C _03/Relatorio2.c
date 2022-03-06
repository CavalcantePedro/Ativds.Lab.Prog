#include <stdio.h>
#include <string.h>

typedef struct 
{
    char descricao[50];
    float peso;
    char tipo;
}Movel;

void TirarBarraN(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    int n, acimaDez = 0, terminaReal = 0;
    float x= 0.0;
    char maisPesado[50];
    scanf("%d%*c",&n);
    Movel moveis[n];
    for (int i = 0; i < n; i++)
    {
        fgets(moveis[i].descricao,50,stdin);
        TirarBarraN(moveis[i].descricao);
        scanf("%f%*c", &moveis[i].peso);
        scanf("%c%*c", &moveis[i].tipo);
        if (moveis[i].peso > 10 && moveis[i].tipo == 's')
        {
            acimaDez++;
        }
        if (strstr(moveis[i].descricao, "Real"))
        {
            terminaReal++;
        }
        if (moveis[i].peso >= x) 
        {
            x = moveis[i].peso;
            strcpy(maisPesado,moveis[i].descricao);
        }
    }
    printf("Tipo 's' acima de 10Kg: %d\n", acimaDez);
    printf("Termina em  \"Real\": %d\n",terminaReal);
    printf("Mais pesado: \"%s\"\n", maisPesado);
    return 0;
}