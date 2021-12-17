#include<stdio.h>

int main()
{
    int range = pow(10,9);
    int num;
    scanf("%d",&num);
    int nCifri=1;
    for(int i=10; i<range; i*=10)
    {
        if(num<i) break;
        nCifri++;
    }
    if(nCifri!=7)
    {
        printf("Vneseniot broj ne e 7 cifren!\n");
        system("pause");
        return 0;
    }
    int cifri[nCifri];
    int sum=0;
    int mult=1;
    for(int i=0;i<nCifri;i++)
    {
        cifri[i]=num%10;
        num/=10;
        sum+=cifri[i];
        mult*=cifri[i];
    }
    for(int i=nCifri-1;i>=0;i--)
        printf("%d\n",cifri[i]);
    printf("%d\n%d",sum,mult);
    printf("\n");
    system("pause");
    return 0;
}
