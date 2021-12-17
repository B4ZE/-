#include<stdio.h>
#include<math.h>

int main()
{
    int range = pow(10,9);
    int b;
    scanf("%d",&b);
    int nCifri=1;
    for(int i=10;i<range;i*=10)
    {
        if(b<i) break;
        nCifri++;
    }
    if(nCifri==5)
    {
        int t=b;
        int pal=0;
        while(t>0)
        {
            pal=pal*10+t%10;
            t/=10;
        }
        if(pal==b)  printf("Palindrom");
        else printf("Ne e palindrom");
    }
    else
    {
        printf("Nevaliden vlez");
    }
    printf("\n");
    system("pause");
    return 0;
}
