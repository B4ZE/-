#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int W,H;
    scanf("%d %d",&H,&W);
    int matrix[W][H];
    for(int y=0;y<H;y++)    for(int x=0;x<W;x++)    scanf("%d",&matrix[x][y]);
    int Sum[H];
    for(int y=0;y<H;y++)
    {
        int s=0;
        for(int x=0;x<W;x++)
        {
            s+=matrix[x][y];
        }
        Sum[y]=s;
    }
    for(int y=0;y<H;y++)
    {
        if(Sum[y]>N)    for(int x=0;x<W;x++)    matrix[x][y]=1;
        if(Sum[y]==N)    for(int x=0;x<W;x++)    matrix[x][y]=0;
        if(Sum[y]<N)    for(int x=0;x<W;x++)    matrix[x][y]=-1;
        for(int x=0;x<W;x++)    printf("%d ",matrix[x][y]);
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
