#include<stdio.h>

int main()
{
    float r=0;
    float a;
    for(int i=0;i<5;i++)
    {
        scanf("%f",&a);
        r+=a;
    }
    r/=5;
    printf("%.2f",r);
    printf("\n");
    system("pause");
    return 0;
}
