#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)
        scanf("%d",&arr[i]);
    for(int j=0; j<N; j++)
        for(int i=0; i<N-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    for(int i=0; i<N; i++)
        printf("%d ",arr[i]);
    printf("\n");
    system("pause");
    return 0;
}
