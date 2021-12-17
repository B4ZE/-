#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=(arr[i]+1)*!(arr[i]%2)+(arr[i]-1)*(arr[i]%2);
    }
    for(int i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\n");
    system("pause");
    return 0;
}
