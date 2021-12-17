#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int y=0; y<n; y++)
        for(int x=0; x<n; x++)
            scanf("%d",&arr[x][y]);
    int d=2;
    int region[d*d];
    for(int y=0; y<d; y++)
        for(int x=0; x<d; x++)
            region[x+y*d]=0;
    int sum=0;
    for(int y=0;y<n/2;y++)
    {
        for(int x=0;x<n/2;x++)
        {
            sum+=arr[x][y];
        }
    }
    region[0]=sum;
    sum=0;
    for(int y=0;y<n/2;y++)
    {
        for(int x=n-1;x>n/2;x--)
        {
            sum+=arr[x][y];
        }
    }
    region[1]=sum;
    sum=0;
    for(int y=n-1;y>n/2;y--)
    {
        for(int x=0;x<n/2;x++)
        {
            sum+=arr[x][y];
        }
    }
    region[2]=sum;
    sum=0;
    for(int y=n-1;y>n/2;y--)
    {
        for(int x=n-1;x>n/2;x--)
        {
            sum+=arr[x][y];
        }
    }
    region[3]=sum;
    for(int y=0; y<d; y++)
    {
        for(int x=0; x<d; x++)
        {
            printf("%d ",region[x+y*d]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
