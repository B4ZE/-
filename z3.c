#include<stdio.h>
#include<stdbool.h>

int sum(int num,int s,bool t)
{
    if(num==0)    return s;
    if(t)   s+=num%10;
    return sum(num/10,s,!t);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n,0,0));
    printf("\n");
    system("pause");

    return 0;
}
