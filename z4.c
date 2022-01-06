#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d %d",&Y,&X);
    int matrix[X][Y];
    for(int y=0;y<Y;y++)
        for(int x=0;x<X;x++)
            scanf("%d",&matrix[x][y]);
    int xCord,yCord;
    scanf("%d %d",&yCord,&xCord);
    int kvad[4]={0};
    for(int y=0;y<yCord;y++)    for(int x=xCord;x<X;x++)    kvad[0]+=matrix[x][y];
    for(int y=0;y<yCord;y++)    for(int x=0;x<xCord;x++)    kvad[1]+=matrix[x][y];
    for(int y=yCord;y<Y;y++)    for(int x=0;x<xCord;x++)    kvad[2]+=matrix[x][y];
    for(int y=yCord;y<Y;y++)    for(int x=xCord;x<X;x++)    kvad[3]+=matrix[x][y];
    for(int i=0;i<4;i++)    printf("%d ",kvad[i]);

    printf("\n");
    system("pause");
    return 0;
}
