#include<stdio.h>

int main()
{
    char C;
    int K;
    scanf("%c%d",&C,&K);
    char niza[26];
    for(int i=65;i<=90;i++)
        niza[i-65]=i;
    int k=K%26;
    int c=C-65;
    int t=c+k;
    if(c+k>=26) t=abs(26-c-k);
    printf("%c",niza[t]);
    printf("\n");
    system("pause");
    return 0;
}
