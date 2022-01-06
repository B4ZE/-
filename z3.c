#include<stdio.h>
#include<stdlib.h>

int sum(int *p,int n,int ind)
{
    int s=0;
    for(int i=ind;i<n;i++)  s+=*(p+i);
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)    scanf("%d",ptr+i);
    int ind;
    scanf("%d",&ind);
    printf("%d",sum(ptr,n,ind));
    free(ptr);
    printf("\n");
    system("pause");
    return 0;
}
