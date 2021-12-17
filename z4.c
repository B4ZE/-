#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][N];
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N;x++)
        {
            scanf("%d",&arr[x][y]);
        }
    }
    int gD=0,sD=0;
    for(int y=0,_y=N-1,x=0;y<N;y++,_y--,x++)
    {
        gD+=arr[x][y];
        sD+=arr[x][_y];
    }
    printf("%d\n",gD-sD);
    int k1=0,kN=0;
    for(int y=0;y<N;y++)
    {
        k1+=arr[0][y];
        kN+=arr[N-1][y];
    }
    printf("%d",k1-kN);
    printf("\n");
    system("pause");
    return 0;
}
