#include<stdio.h>
#include<stdbool.h>

int f(int M, int N)
{
    for(int i=M;i<=N;i++)
    {
        int b=i;
        bool eBlag=true;
        while(b>0)
        {
            int p = b%10;
            if(!(p==0 || p==2 || p==4 || p==6 || p==8)) eBlag=false;
            b/=10;
        }
        if(eBlag) return i;
    }
    return -1;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int bb = f(m,n);
    if(bb == -1)    printf("NE");
    else    printf("%d",bb);
    printf("\n");
    system("pause");
    return 0;
}
