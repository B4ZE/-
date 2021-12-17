#include<stdio.h>

int main()
{
    int km;
    scanf("%d",&km);
    int komEden1,komEden2,komEden3;
    scanf("%d%d%d",&komEden1,&komEden2,&komEden3);
    int komDva1,komDva2,komDva3,komDva4;
    scanf("%d%d%d%d",&komDva1,&komDva2,&komDva3,&komDva4);
    int cena1=komEden1+(km-komEden2)*komEden3;
    int cena2=komDva2+(km/komDva1)*komDva3+km*komDva4;
    printf("%d %d\n",cena1,cena2);
    if(cena1<=cena2)    printf("1");
    else printf("0");
    printf("\n");
    system("pause");
    return 0;
}
