#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int counter=0;
    for(int i=a;i<=b;i++)
    {
        int b=i;
        int pal=0;
        while(b>0)
        {
            pal=pal*10+b%10;
            b/=10;
        }
        if(i+pal<=2*i)
        {
            printf("%d\n",i);
            counter++;
        }
    }
    printf("Vkupno: %d",counter);
    printf("\n");
    system("pause");
    return 0;
}
