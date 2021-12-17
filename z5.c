#include<stdio.h>

int main()
{
    int inp;
    int i=inp;
    int s=0,m=0,h=0;
    scanf("%d",&inp);
    printf("%d",inp);
    while(inp>=3600)
    {
        h++;
        inp-=3600;
    }
    while(inp>=60)
    {
        m++;
        inp-=60;
    }
    s=inp;
    printf(" sekundi se %d casovi, %d minuti i %d sekundi",h,m,s);
    printf("\n");
    system("pause");
    return 0;
}
