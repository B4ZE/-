#include<stdio.h>

float a(float A)
{
    if(A<0) return -A;
    else    return A;
}

int main()
{
    int W,H;
    scanf("%d %d",&H,&W);
    int matrix[W][H];
    for(int y=0;y<H;y++)    for(int x=0;x<W;x++)    scanf("%d",&matrix[x][y]);
    float aSredina[H];
    for(int y=0;y<H;y++)
    {
        float aritmetickaSredina=0;
        for(int x=0;x<W;x++)
        {
            aritmetickaSredina+=matrix[x][y];
        }
        aritmetickaSredina/=W;
        aSredina[y]=aritmetickaSredina;
    }
    //for(int y=0;y<H;y++)    printf("%.2f ",aSredina[y]);
    //printf("\n");
    float naj[W][H];
    for(int y=0;y<H;y++)
    {
        for(int x=0;x<W;x++)
        {
            naj[x][y]=a(aSredina[y]-matrix[x][y]);
            //printf("%.2f ",naj[x][y]);
        }
        //printf("\n");
    }
    int index[H];
    for(int y=0;y<H;y++)
    {
        int ind;
        float max=0;
        for(int x=0;x<W;x++)
        {
            if(naj[x][y]>max)
            {
                max=naj[x][y];
                ind=x;
            }
        }
        index[y]=ind;
    }
    for(int y=0;y<H;y++)    for(int x=0;x<W;x++)    if(x==index[y]) printf("%d ",matrix[x][y]);

    printf("\n");
    system("pause");
    return 0;
}
