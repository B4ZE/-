#include<stdio.h>

int main()
{
    char c='g';
    int sum=0;
    while(c!='.')
    {
        scanf("%c",&c);
        if(c>='0' && c<='9')
            sum+=c-48;
        else if(c>='a' && c<='f')
            sum+=c-87;
        else if(c>='A' && c<='F')
            sum+=c-55;
    }
    if(sum%16==0) printf("pogodok");
    else if(sum%16==0 && sum%10==6 && (sum/10)%10==1)   printf("poln pogodok");
    else printf("%d",sum);
    printf("\n");
    system("pause");
    return 0;
}
