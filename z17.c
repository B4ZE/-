#include<stdio.h>

int A(int a)
{
    return -a*(a<0)+a*(a>=0);
}

int main()
{
    int W,H;
    scanf("%d %d",&H,&W);
    int matrix[W][H];
    for(int y=0; y<H; y++)    for(int x=0; x<W; x++)    scanf("%d",&matrix[x][y]);
    int sumaLevo[H], sumaDesno[H];
    for(int y=0; y<H; y++)  sumaLevo[y]=sumaDesno[y]=0;
    if(W%2!=0)
    for(int y=0; y<H; y++)
    {
        for(int x=0; x<W; x++)
        {
            if(W%2!=0)
            {
                if(x<W/2)   sumaLevo[y]+=matrix[x][y];
                else if(x>W/2)   sumaDesno[y]+=matrix[x][y];
            }
        }
        matrix[W/2][y]=A(sumaLevo[y]-sumaDesno[y]);
    }
    else
    {
        for(int y=0;y<H;y++)
        {
            for(int x=0;x<W/2;x++)    sumaLevo[y]+=matrix[x][y];
            for(int x=W/2;x<W;x++)    sumaDesno[y]+=matrix[x][y];
            matrix[W/2-1][y]=A(sumaLevo[y]-sumaDesno[y]);
            matrix[W/2][y]=A(sumaLevo[y]-sumaDesno[y]);
        }
    }
    for(int y=0; y<H; y++)
    {
        for(int x=0; x<W; x++)
        {
            printf("%d ",matrix[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
