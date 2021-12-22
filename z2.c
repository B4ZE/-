#include<stdio.h>

int f(int n,int k,int sum)
{
    if(n==0) return sum;
    int pc=n;
    while(1)
    {
        if(pc<10)   break;
        pc/=10;
    }
    if(pc>k)
    {
        sum+=pc;
        printf("%d",pc);
    }
    int  nCifri=0,t=n;
    while(t>0)
    {
        nCifri++;
        t/=10;
    }
    for(int i=1; i<nCifri; i++)
    {
        pc*=10;
    }
    return f(n-pc,k,sum);
}

int main()
{
    while(0)
    {
        int l;
        scanf("%d",&l);
        int pc=l;
        while(1)
        {
            if(pc<10)   break;
            pc/=10;
        }
        printf("posledna cifra na %d e %d   ",l,pc);
        int  nCifri=0,t=l;
        while(t>0)
        {
            nCifri++;
            t/=10;
        }
        for(int i=1; i<nCifri; i++)
        {
            pc*=10;
        }
        printf("%d\n",l-pc);
    }
    int k;
    scanf("%d",&k);
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        int s=f(arr[i],k,0);
        printf(" : %d\n",s);
    }
    printf("\n");
    system("pause");

    return 0;
}
