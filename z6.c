#include<stdio.h>
#include<stdbool.h>

int main()
{
    int W,H;
    scanf("%d %d",&H,&W);
    int matrix[W+4][H+4];
    for(int y=0;y<H+4;y++)  for(int x=0;x<W+4;x++)  matrix[x][y]=0;
    for(int y=2;y<H+2;y++)    for(int x=2;x<W+2;x++)    scanf("%d",&matrix[x][y]);
    int b=0;
    for(int y=2;y<H+2;y++)
    {
        for(int x=2;x<W+2;x++)
        {
            int streak=0;
            while(matrix[x][y]==1)
            {
                streak++;
                x++;
            }
            if(streak>=3)   b++;
        }
    }
    for(int x=2;x<W+2;x++)
    {
        for(int y=2;y<H+2;y++)
        {
            int streak=0;
            while(matrix[x][y]==1)
            {
                streak++;
                y++;
            }
            if(streak>=3)   b++;
        }
    }
    printf("%d",b);
    printf("\n");
    system("pause");
    return 0;
}
