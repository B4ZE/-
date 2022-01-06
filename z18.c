#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    float A[n][n];
    for(int y=0;y<n;y++)    for(int x=0;x<n;x++)    scanf("%f",&A[x][y]);
    float X=0,Y=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<y;x++)    X+=A[x][y];
        for(int x=0,x2=n-1;x<y;x++,x2--)  Y+=A[x2][y];
    }
    for(int y=0;y<n;y++)    for(int x=0;x<n;x++)    A[x][y]=0;
    for(int y=0,x1=0,x2=n-1;y<n;y++,x1++,x2--)
    {
        A[x1][y]+=X;
        A[x2][y]+=Y;
    }
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            printf("%.2f ",A[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
