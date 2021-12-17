#include<stdio.h>

int main()
{
    float smetka;
    float kWh;
    scanf("%f",&kWh);
    if(kWh<500)    smetka=5*kWh;
    else if(kWh>=500 && kWh<650)    smetka = 5*500+7.5*(kWh-500);
    else if(kWh>=650 && kWh<850)    smetka = 5*500+7.5*150+11*(kWh-650);
    else if(kWh>=850)   smetka = 5*500+7.5*150+11*200+13.5*(kWh-850);
    if(smetka<=7000) smetka+=smetka*10.0/100.0;
    else if(smetka>7000) smetka+=smetka*18.0/100.0;
    printf("%.2f",smetka);
    printf("\n");
    system("pause");
    return 0;
}
