#include<stdio.h>

int f(int n)
{
    if(n<10)    return 1;
    else return (n%10<(n/10)%10) && f(n/10);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        printf("%d\n",f(arr[i]));
    printf("\n");
    system("pause");
    return 0;
}
