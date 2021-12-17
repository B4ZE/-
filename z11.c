#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[100];
    int CikCakovi[100];
    for(int i=0; i<100; i++)
        CikCakovi[i]=-1;
    do
    {
        scanf("%s",str);
        int broj=0;
        if(str[0]=='-')
        {
            for(int i=1; i<strlen(str); i++)
            {
                if(str[i]>='0' && str[i]<='9')
                    broj = broj*10+str[i]-48;
            }
            broj=-broj;
            str[0]='0';
        }
        else
            for(int i=0; i<strlen(str); i++)
            {
                if(str[i]>='0' && str[i]<='9')
                    broj = broj*10+str[i]-48;
            }
        if(broj>=10)
        {
            int b=broj;
            int nCifri=0;
            while(b>0)
            {
                nCifri++;
                b/=10;
            }
            bool eCikCak=true;
            b=broj;
            bool t=(b%10>=5);
            for(int i=0; i<nCifri; i++)
            {
                if(t)
                {
                    if(!(b%10>=5))
                        eCikCak=false;
                }
                else
                {
                    if(!(b%10<5))
                        eCikCak=false;
                }
                t=!t;
                b/=10;
            }
            if(eCikCak)
            {
                for(int i=0; i<100; i++)
                {
                    if(CikCakovi[i]==-1)
                    {
                        CikCakovi[i]=broj;
                        break;
                    }
                }
            }
        }
    }
    while(str[0]>='0' && str[0]<='9');
    for(int i=0; i<100; i++)
    {
        if(CikCakovi[i]!=-1)
            printf("%d\n",CikCakovi[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
