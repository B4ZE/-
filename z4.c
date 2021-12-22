#include<stdio.h>

int obratenBroj(int n)
{
    int b=0;
    while(n>0)
    {
        b=b*10+n%10;
        n/=10;
    }
    return b;
}

int sumaNaCifri(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n/=10;
    }
    return s;
}

void pecatiVoInterval(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int b=i+obratenBroj(i);
        if(!(b%sumaNaCifri(b)))   printf("%d\n",i);
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    pecatiVoInterval(a,b);
    printf("\n");
    system("pause");
    return 0;
}
