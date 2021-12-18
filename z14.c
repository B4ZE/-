#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>2)
    for(int y=n-1;y>=0;y--)
    {
        for(int x=0;x<n;x++)
        {
            if(y==0 || x==n-1) printf("*");
            else if(x>=y)    printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    else    printf("Nevaliden vlez");
    printf("\n");
    system("pause");
    return 0;
}
