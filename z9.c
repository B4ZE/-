#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int t=n-1;
    int k=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(y==0  || y==n-1) printf("*");
            else if(x==t || x==k) printf("*");
            else printf(" ");
        }
        printf("\n");
        t--;
        k++;
    }
    printf("\n");
    system("pause");
    return 0;
}
