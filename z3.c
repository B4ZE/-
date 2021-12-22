#include<stdio.h>
#include<limits.h>

int main()
{
    int X,Y;
    scanf("%d %d",&Y,&X);
    int arr[X][Y];
    for(int y=0;y<Y;y++)
        for(int x=0;x<X;x++)
            scanf("%d",&arr[x][y]);
    int sumi[X];
    for(int x=0;x<X;x++)
    {
        sumi[x]=0;
        for(int y=0;y<Y;y++)
        {
            sumi[x]+=arr[x][y];
        }
    }
    int index;
    int min=INT_MAX;
    for(int x=0;x<X;x++)
    {
        if(sumi[x]<min)
            min=sumi[x];
    }
    for(int x=0;x<X;x++)
    {
        if(min==sumi[x])
        {
            index=x;
            break;
        }
    }
    printf("%d",index);
    printf("\n");
    system("pause");
    return 0;
}
