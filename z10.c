#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int range = pow(10,9);
    int broj;
    int nCifri=1;
    bool eSpecijalen;
    scanf("%d",&broj);
    for(int i=10;i<range;i*=10)
    {
        if(broj<i) break;
        nCifri++;
    }
    if(nCifri==7)
    {
        int b[7];
        int b1=broj;
        for(int i=6;i>=0;i--)
        {
            b[i]=b1%10;
            b1/=10;
        }
        if(b[5]+b[6]!=0)
        {
            if(broj%b[0]==0 && broj%(b[5]+b[6])!=0)    eSpecijalen=true;
            else    eSpecijalen=false;
        }else
        {
            printf("Nevaliden broj");
            return 0;
        }
        if(b[1]!=0 && b[5]+b[6]!=0)
        {
            if(broj%b[1]!=0 && broj%(b[5]+b[6])!=0)    eSpecijalen=true;
            else    eSpecijalen=false;
        }else
        {
            printf("Nevaliden broj");
            return 0;
        }
        if(eSpecijalen)    printf("DA");
        else    printf("NE");
    }
    printf("\n");
    system("pause");
    return 0;
}
