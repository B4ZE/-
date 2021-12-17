#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    for(int i=0; i<strlen(str); i++)
        if(str[i]==' ') count++;
    int broj[count];
    for(int i=0; i<count; i++)
    {
        broj[i]=0;
    }
    int c=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='#') break;
        else if(str[i]>='0' && str[i]<='9')  broj[c]=broj[c]*10+str[i]-48;
        else if(str[i]==' ')    c++;
    }
    int arr[5]={0,0,0,0,0};
    for(int i=0;i<count;i++)
    {
        int max=-1;
        int index;
        for(int t=4;broj[i]>0;t--)
        {
            if(broj[i]%10>max)
            {
                max = broj[i]%10;
                index=t;
            }
            broj[i]/=10;
        }
        arr[index]++;
    }
    int res[5]={0,0,0,0,0};
    for(int i=0,t=4;i<5;i++,t--)
        res[i]=arr[t];
    for(int i=0;i<5;i++)
        printf("%d: %d\n",i,res[i]);
    printf("\n");
    system("pause");
    return 0;
}
