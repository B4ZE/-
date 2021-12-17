#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=0;
    int k=n-1;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(x==0 || x==n-1)  printf("*");
            else if(x==t || x==k)   printf("*");
            else printf(" ");
        }
        t++;
        k--;
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
