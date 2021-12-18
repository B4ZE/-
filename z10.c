#include<stdio.h>

int f(int X)
{
    return X;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<=2) printf("Nevaliden vlez");
    else
    {
        int k=0;
        for(int y=0;y<n;y++)
            {
            for(int x=0;x<n;x++)
            {
                if(f(x)<=y) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
