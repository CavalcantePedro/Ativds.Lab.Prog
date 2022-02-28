#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x;
    int y;

} tPonto;

float Dist(tPonto p1, tPonto p2)
{
    float result;
    result = sqrt(pow((p1.x - p2.x) ,2) + pow((p1.y - p2.y) , 2));
    return pow(result , 2);
}


int main()
{
    tPonto p1, p2;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);
    printf("%.0f\n", Dist(p1,p2));
    return 0;
}