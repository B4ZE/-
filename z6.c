#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            scanf("%d",&arr[x][y]);
        }
    }
    int d[n];
    for(int y=0;y<n;y++)
    {
        d[y]=0;
        int streak=0;
        for(int x=0;x<n;x++)
        {
            if(x!=n-1)
            {
                if(arr[x][y]>=arr[x+1][y])
                {
                    streak++;
                    if(streak>d[y]) d[y]=streak;
                    streak=0;
                }else   streak++;
            }else
            {
                if(arr[x-1][y]<arr[x][y]) streak++;
            }
            if(streak>d[y]) d[y]=streak;
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(d[i]>max)    max=d[i];
    }
    printf("%d",max);
    printf("\n");
    system("pause");
    return 0;
}
