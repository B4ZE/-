#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[2*n][n];
    for(int y=0;y<n;y++)    for(int x=0;x<2*n;x++)  scanf("%d",&A[x][y]);
    int B[n][2*n];
    for(int y=0;y<2*n;y++)  for(int x=0;x<n;x++)    B[x][y]=0;
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            B[x][y]=A[x][y];
        }
    }
    for(int y1=0,y2=n;y1<n;y1++,y2++)
    {
        for(int x1=n,x2=0;x1<2*n;x1++,x2++)
        {
            B[x2][y2]=A[x1][y1];
        }
    }
    for(int y=0;y<2*n;y++)
    {
        for(int x=0;x<n;x++)
        {
            printf("%d ",B[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");

    return 0;
}
