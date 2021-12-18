#include<stdio.h>

int f(int X)
{
    return X;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n>2)
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(x==0 || y==n-1) printf("*");
            else if(f(x)==y) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    else printf("Nevaliden vlez");
    printf("\n");
    system("pause");
    return 0;
}
