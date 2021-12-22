#include<stdio.h>

void print(int k,int n)
{
    if(k==n)
    {
        printf("%d",k);
        return;
    }
    printf("%d ",k);
    print(k+1,n);
}

void triagolnik(int n)
{
    if(n==1)
    {
        printf("%d",n);
        return;
    }
    print(1,n);
    printf("\n");
    triagolnik(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    triagolnik(n);
    printf("\n");
    system("pause");

    return 0;
}
