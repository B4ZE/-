#include<stdio.h>

int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[N+2][M+2];
    int arr2[N+2][M+2];
    for(int y=0; y<M+2; y++)
    {
        for(int x=0; x<N+2; x++)
        {
            arr[x][y]=0;
            arr2[x][y]=0;
        }
    }
    for(int y=1; y<M+1; y++)
    {
        for(int x=1; x<N+1; x++)
        {
            scanf("%d",&arr[x][y]);
        }
    }
    for(int y=0; y<M+2; y++)
    {
        for(int x=0; x<N+2; x++)
        {
            arr2[x][y]=arr[x][y];//koga x=6 y=2 arr[1][1] se promenuva
            
        }
    }
    for(int y=1; y<M+1; y++)
    {
        for(int x=1; x<N+1; x++)
        {
            if(arr[x][y]==0)
            {
                int s=0;
                for(int _y=y-1; _y<=y+1; _y++)
                {
                    for(int _x=x-1; _x<=x+1; _x++)
                    {
                        s+=arr[_x][_y];
                    }
                }
                arr2[x][y]=s;
            }
        }
    }
    for(int y=1; y<M+1; y++)
    {
        for(int x=1; x<N+1; x++)
        {
            if(arr[x][y]==1)   printf("* ");
            else    printf("%d ",arr2[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
