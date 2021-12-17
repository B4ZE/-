#include<stdio.h>
#include<stdbool.h>

int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    int sum=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='!') break;
        if(str[i]>=48 && str[i]<=57)
        {
            bool alreadyDone=false;
            if(str[i+1]>=48 && str[i+1]<=57)
            {
                int t=10*(str[i]-48)+(str[i+1]-48);
                sum+=t;
                i++;
                alreadyDone = true;
            }
            if(!alreadyDone)
                sum+=str[i]-48;
        }
    }
    printf("%d",sum);
    printf("\n");
    system("pause");
    return 0;
}
