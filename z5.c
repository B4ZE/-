#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][100];
    int k[n];
    int dolzinaNaNizata[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dolzinaNaNizata[i]);
        for(int j=0;j<dolzinaNaNizata[i];j++)    scanf("%d",&arr[i][j]);
        scanf("%d",&k[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=k[i]-1;j<dolzinaNaNizata[i];j+=k[i])
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][j-1];
            arr[i][j-1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<dolzinaNaNizata[i];j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
