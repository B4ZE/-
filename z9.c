#include<stdio.h>

double f(int *arr,int i,int n)
{
    if(i==n-1)  return (*(arr+i));
    else    return *(arr+i)+1.0/f(arr,i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
    printf("%lf",f(arr,0,n));
    printf("\n");
    system("pause");
    return 0;
}
