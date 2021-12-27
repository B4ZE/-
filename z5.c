#include<stdio.h>

#define N 1024

void letterFrequency(char *ptr,char l)
{
    unsigned int mala=0, golema=0, i=0;
    while(*(ptr+i)!=0)
    {
        if(*(ptr+i)==tolower(l))   mala++;
        if(*(ptr+i)==toupper(l))   golema++;
        i++;
    }
    printf("%c -> %.3f%%\n", tolower(l), (mala/(float)i)*100);
    printf("%c -> %.3f%%\n", toupper(l), (golema/(float)i)*100);
    printf("\n");
}

int main()
{
    char text[N];
    for(int i=0;i<N;i++)
    {
        char c;
        if(c=='\n')
        {
            *(text+i)=0;
            break;
        }
        c=getchar();
        *(text+i)=c;
    }
    char letter=getchar();
    letterFrequency(text,letter);
    
    printf("\n");
    system("pause");
    return 0;
}