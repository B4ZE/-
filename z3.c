#include<stdio.h>

int main()
{
    int inp;
    scanf("%d",&inp);
    int l=inp;
    int sum[inp];
    for(int i=0;i<inp;i++)
        sum[i]=0;
    for(;inp>0;inp--)
    {
        for(int i=inp-1;i>0;i--)
        {
            if(inp%i==0)
            {
                sum[inp]+=i;
            }
        }
    }
    int max=0;
    int index=-1;
    for(int i=0;i<l;i++)
    {
        if(sum[i]>max)
        {
            max = sum[i];
            index = i;
        }
    }
    printf("%d",index);
    printf("\n");
    system("pause");
    return 0;
}
