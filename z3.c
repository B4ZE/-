#include<stdio.h>

int main()
{
    int size=100;
    int arr[size];
    for(int i=0;i<size;i++)  arr[i]=-1;
    int index=0;
    int input;
    do
    {
        scanf("%d",&input);
        if(input>=1 && input<=90)   arr[index]=input;
        index++;
    }while(input>=1 && input<=90);
    int joker=arr[0]%10;
    for(int i=1;i<7;i++)
    {
        if(arr[i]>=1 && arr[i]<=90)
            joker=joker*10+arr[i]%10;
    }
    for(int i=7;i<size;i++)
    {
        if(arr[i]>=1 && arr[i]<=90)
            joker+=arr[i];
    }
    printf("%d",joker);
    printf("\n");
    system("pause");
    return 0;
}
