#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    int counter=0;
    for(int i=a;i<=b;i++)
    {
        int sum=0;
        int b=i;
        while(b>0)
        {
            if((b%10)%2==0 && (b%10)%3!=0)
                sum+=b%10;
            b/=10;
        }
        if(sum>0 && sum%7==0)
        {
            counter++;
            printf("%d\n",i);
        }
    }
    printf("Vkupno: %d",counter);
    printf("\n");
    system("pause");
    return 0;
}
