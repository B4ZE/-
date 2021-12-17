#include<stdio.h>
#include<stdbool.h>

int main()
{
    int N,X;
    scanf("%d%d",&N,&X);
    bool eTotalnoRazlicen;
    for(int i=N-1;i>-1000;i--)
    {
        eTotalnoRazlicen=true;
        int n=i;
        while(n>0)
        {
            int x=X;
            while(x>0)
            {
                if(n%10==x%10)
                {
                    eTotalnoRazlicen=false;
                    break;
                }
                x/=10;
            }
            if(!eTotalnoRazlicen) break;
            n/=10;
        }
        if(eTotalnoRazlicen)
        {
            printf("%d",i);
            break;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
