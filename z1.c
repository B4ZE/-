#include<stdio.h>

int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[N+2][M+2];
    int arr2[N+2][M+2];
    //arr2[5][1]=216;
    //printf("%d",arr[0][0]);//ako se vnese za M:3, N:5 togash se dobiva 216 koja e isto se arr2[6][1]
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
            //printf(" .%d. ",arr[1][1]);
            arr2[x][y]=arr[x][y];//koga x=6 y=2 arr[1][1] se promenuva
            /*if(arr[1][1]!=1)
            {
                printf("\neve go x:%d,y:%d,arr[1][1]:%d",x,y,arr[1][1]);
                printf("\nnizata:\n");
                for(int j=0;j<M+2;j++)
                {
                    for(int i=0;i<N+2;i++)
                    {
                        printf("%d ",arr[i][j]);
                    }
                    printf("\n");
                }
                system("pause");
                return 0;
            }*/
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
