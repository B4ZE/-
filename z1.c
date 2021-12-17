#include<stdio.h>

int main()
{
    float ts, p;
    scanf("%f%f",&ts,&p);
    ts-=p;
    ts-=(p*18)/(float)100;
    if(ts>=1) printf("1");
    else printf("0");
    printf("\n");
    system("pause");
    return 0;
}
