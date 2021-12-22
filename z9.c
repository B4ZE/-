#include<stdio.h>

void print(int k,int n)
{
    if(k==n)
    {
        printf("%d",k);
        return;
    }
    printf("%d",k);
    print(k+1,n);
}

void triagolnik(int k,int n)
{
    if(k==n)
    {
        print(1,n);
        return;
    }
    print(1,k);
    printf("\n");
    triagolnik(k+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    triagolnik(1,n);
    printf("\n");
    system("pause");

    return 0;
}
