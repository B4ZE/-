#include<stdio.h>

int nzd(int a,int b)
{
    if(a%b==0)  return b;
    else return nzd(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",nzd(a,b));
    printf("\n");
    system("pause");

    return 0;
}
