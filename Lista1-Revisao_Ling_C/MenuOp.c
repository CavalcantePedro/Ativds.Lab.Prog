#include <stdio.h>

void Menu()
{
    printf("1 - Item 1\n2 - Item 2 \n3 - Item 3\n4 - Sair\n");
}

int main()
{
    int x;
    while (1)
    {
        Menu();
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Item 1\n");
            break;
        case 2:
            printf("Item 2\n");
            break;
        case 3:
            printf("Item 3\n");
            break;
        case 4:
            printf("Sair\n");
            return 0;
        default:
            printf("Opcao %d Invalida\n", x);
            break;
        }
    }
      
    return 0;
}