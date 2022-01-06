#include<stdio.h>
#include<ctype.h>

void t(char *c,int mesta,int pomesteno)
{
    if(!isalpha(*c))    return;
    if(pomesteno==mesta) return;
    if(*c>='a' && *c<='z')
    {
        if(*c=='z') *c='a';
        else *c+=1;
    }
    if(*c>='A' && *c<='Z')
    {
        if(*c=='Z') *c='A';
        else    *c+=1;
    }
    t(c,mesta,pomesteno+1);
}

int main()
{
    int N, X;
    scanf("%d %d",&N,&X);
    getchar();
    char s[80][N];
    for(int y=0;y<N;y++)    for(int x=0;x<80;x++)   s[x][y]=0;
    for(int i=0,red=0;red<N;i++)
    {
        char c=getchar();
        s[i][red]=c;
        if(c=='\n')
        {
            i=-1;
            red++;
        }
    }
    for(int i=0,red=0;red<N;i++)
    {
        t(&s[i][red],X,0);
        printf("%c",s[i][red]);
        if(s[i][red]=='\n')
        {
            i=-1;
            red++;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
