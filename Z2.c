#include<stdio.h>

int main()
{
    int n=8;
    int amount=5000;
    int dif[n];
    dif[0]=4000;
    dif[1]=500;
    dif[2]=400;
    dif[3]=50;
    dif[4]=40;
    dif[5]=5;
    dif[6]=3;
    dif[7]=1;
    int values1[n+1];
    for(int i=0;i<=n;i++)
        values1[i]=1;
    int count[n+1];
    for(int i=0;i<=n;i++)
        count[i]=0;

    int suma;
    scanf("%d",&suma);
    for(int i=0;i<=n;i++)
    {
        while(suma>=amount)
        {
            suma-=amount;
            count[i]++;
        }
        if(i!=n)
        amount-=dif[i];
    }
    for(int i=0;i<=n;i++)
        for(int t=n-i;t<=n;t++)
            values1[i]+=dif[t-1];

    for(int i=n;i>0;i--)
        values1[i]=values1[i-1];

    values1[0]--;
    int values[n+1];
    for(int i=0, t=n;i<=n;i++)
    {
        values[i]=values1[t];
        t--;
    }
    for(int i=0;i<=n;i++)
        printf("%d*%d\n",count[i],values[i]);

    printf("\n");
    system("pause");
    return 0;
}
