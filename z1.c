#include<stdio.h>
#include<stdbool.h>

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int N;
    scanf("%d",&N);
    bool eParen=!(N%2);
    int arr[N];
    for(int i=0;i<N;i++)    scanf("%d",&arr[i]);

    printArray(arr,N);
    printf("\n");

    int arr2[N];
    for(int i=0,j=N-1;i<N;i++,j--)  arr2[j]=arr[i];
    printArray(arr2,N);
    printf("\n");

    int N2;
    if(eParen)  N2=(N/2);
    else N2=(N/2)+1;
    int arr3[N2];
    for(int i=0,k=0;i<N;i+=2,k++)   arr3[k]=arr2[i];
    printArray(arr3,N2);
    printf("\n");

    int arr4[N2];
    for(int i=0,k=N2-1;i<N2;i++,k--)  arr4[i]=arr3[k];
    printArray(arr4,N2);
    printf("\n");
    system("pause");

    return 0;
}
