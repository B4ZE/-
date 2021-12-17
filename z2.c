#include<stdio.h>
#include<stdbool.h>

int main()
{
    int A,P;
    scanf("%d%d",&A,&P);
    int broj[5]={0,0,0,0,0};
    int k=4;
    for(int i=A-1;i>=0;i--)
    {
        int sum=0;
        int b=i;
        while(b>0)
        {
            sum+=b%10;
            b/=10;
        }
        float procent=(float)P/100;
        if(sum==procent*i)
        {
            if(k>=0)
            {
                broj[k]=i;
                k--;
            }else    break;
        }
    }
    bool t=0;
    for(int i=0;i<5;i++)
        if(broj[i]!=0) t=1;

    if(!t) printf("NEMA");
    else
        for(int i=4;i>=0;i--)
            if(broj[i]!=0)
                printf("%d\n",broj[i]);
    printf("\n");
    system("pause");
    return 0;
}
