#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=n-1;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(x==0 || x==n-1)  printf("*");
            else if(y==0  || y==n-1) printf("*");
            else if(x==t) printf("*");
            else printf(" ");
        }
        printf("\n");
        t--;
    }
    printf("\n");
    system("pause");
    return 0;
}
