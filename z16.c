#include<stdio.h>

int maxC(int k,int M)
{
    if(k<10)
    {
        if(k>M)   return k;
        else    return M;
    }
    if(k%10>M)  M=k%10;
    maxC(k/10,M);
}

int main()
{
    int k;
    while(scanf("%d",&k))   printf("%d\n",maxC(k,0));
    system("pause");
    return 0;
}
