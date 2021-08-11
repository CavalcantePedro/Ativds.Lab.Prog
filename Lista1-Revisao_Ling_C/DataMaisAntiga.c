#include <stdio.h>

typedef struct 
{
    int dia;
    int mes;
    int ano;

} data;

int CompDatas(data d1 , data d2)
{
    if(d1.ano < d2.ano )
    {
        return 1;
    }
    else if (d2.ano < d1.ano)
    {
        return -1;
    }
    else if (d1.mes < d2.mes)
    {
        return 1;
    }
    else if (d2.mes < d1.mes)
    {
        return -1;
    }
    else if (d1.dia < d2.dia)
    {
        return 1;
    }
    else if (d2.dia < d1.dia)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    data d1, d2;
    int result;
    
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    
    switch (CompDatas(d1, d2))
    {
    case 1:
        printf("Pessoa 1 é mais velha\n");
        break;
    case -1:
        printf("Pessoa 2 é mais velha\n");
        break;
    case 0:
        printf("Pessoas são da mesma idade\n");
        break;
    }
   
    return 0;
}