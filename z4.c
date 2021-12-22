#include<stdio.h>
#include<stdbool.h>

int sum(int num,int p,bool t)
{
    if(num==0)    return p;
    if(t)   p*=num%10;
    return sum(num/10,p,!t);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n,1,0));
    printf("\n");
    system("pause");
    return 0;
}
