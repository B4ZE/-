#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    for(int i=0; i<strlen(str); i++)
        if(str[i]==' ') count++;
    int broj[count];
    for(int i=0; i<count; i++)
        broj[i]=0;

    int c=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='#') break;
        else if(str[i]>='0' && str[i]<='9')  broj[c]=broj[c]*10+str[i]-48;
        else if(str[i]==' ')    c++;
    }
    int sum[count];
    int max[count];
    for(int i=0;i<count;i++)
    {
        sum[i]=0;
        max[i]=0;
    }
    for(int i=0;i<count;i++)
    {
        int m=-1;
        int b=broj[i];
        while(b>0)
        {
            sum[i]+=b%10;
            if(b%10>m)
                m=b%10;
            b/=10;
        }
        max[i]=m;
    }
    for(int i=1;i<count;i++)
        sum[i]+=max[i-1];
    for(int i=0;i<count;i++)
        printf("%d: %d\n",broj[i],sum[i]);
    printf("\n");
    system("pause");
    return 0;
}
