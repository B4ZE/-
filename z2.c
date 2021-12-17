#include<stdio.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float D = b*b-4*a*c;
    if(D<0)
    {
        printf("Ravenkata nema realni reshenija\n");
        system("pause");
        return 0;
    }
    float x1,x2;
    x1=(-b-sqrt(D))/(2*a);
    x2=(-b+sqrt(D))/(2*a);
    if(x1==x2)  printf("Dvojno reshenie na ravenkata e: %.2f",x1);
    else printf("Reshenija na ravenkata se: %.2f i %.2f",x1,x2);
    printf("\n");
    system("pause");
    return 0;
}
