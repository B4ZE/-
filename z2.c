#include<stdio.h>
#include<stdbool.h>

int main()
{
    int b1,b2;
    scanf("%d %d",&b1,&b2);
    int b1Cifra[10], b2Cifra[10];
    for(int i=0;i<10;i++)
    {
        b1Cifra[i]=0;
        b2Cifra[i]=0;
    }
    while(b1>0)
    {
        b1Cifra[b1%10]=1;
        b1/=10;
    }
    while(b2>0)
    {
        b2Cifra[b2%10]=1;
        b2/=10;
    }
    bool sePojavuvaat=1;
    for(int i=0;i<10;i++)
    {
        if(b1Cifra[i])
        {
            if(!b2Cifra[i])
            sePojavuvaat=0;
        }
    }
    if(sePojavuvaat) printf("DA");
    else printf("NE");
    printf("\n");
    system("pause");
    return 0;
}
