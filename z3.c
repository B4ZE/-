#include<stdio.h>
#include<stdbool.h>

int main()
{
    int N;
    scanf("%d",&N);
    bool eParen=!(N%2);
    int arr[N];
    for(int i=0;i<N;i++)    scanf("%d",&arr[i]);
    for(int i=0;i<N;i++)    printf("%d ",arr[i]);
    printf("\n");
    int arr2[N];
    for(int i=0,j=N-1;i<N;i++,j--)  arr2[j]=arr[i];
    for(int i=0;i<N;i++)    printf("%d ",arr2[i]);
    printf("\n");
    for(int i=0;i<N;i+=2)    printf("%d ",arr2[i]);
    printf("\n");
    bool e[N];
    int count=0;
    for(int i=0;i<N;i++)
    {
        e[i]=!(i%2);
        if(e[i]) count++;
    }
    int arr3[count];
    if(eParen)  for(int i=0,j=N-2;i<count;i++,j-=2) arr3[i]=arr2[j];
    else    for(int i=0,j=N-1;i<count;i++,j-=2) arr3[i]=arr2[j];
    for(int i=0;i<count;i++)    printf("%d ",arr3[i]);
    printf("\n");
    system("pause");
    return 0;
}
