#include<stdio.h>

void wtf()
{
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != '#')   fputc(c, f);
    fclose(f);
}

int main()
{
    wtf();
    FILE *f=fopen("dat.txt","r");
    int red=0;
    while(1)
    {
        char c=fgetc(f);
        if(feof(f)) break;
        if(c=='\n') red++;
    }
    int brCifri[red];
    for(int i=0;i<red;i++)    brCifri[i]=0;
    fseek(f,0,SEEK_SET);
    for(int i=0;1;)
    {
        char c=fgetc(f);
        if(feof(f)) break;
        if(c=='\n') i++;
        if(c>='0' && c<='9')    brCifri[i]++;
    }
    fseek(f,0,SEEK_SET);
    int dolzina[red];
    for(int i=0;i<red;i++)  dolzina[i]=-1;
    int ind=0;
    while(1)
    {
        char c=fgetc(f);
        if(feof(f)) break;
        dolzina[ind]++;
        if(c=='\n') ind++;
    }
    int index;
    int max=0;
    for(int i=0;i<red;i++)
    {
        if(brCifri[i]>=2 && dolzina[i]>=max)
        {
            max=dolzina[i];
            index=i;
        }
    }
    char niza[1024]={0};
    fseek(f,0,SEEK_SET);
    for(int i=0;1;i++)
    {
        char c=fgetc(f);
        if(feof(f)) break;
        niza[i]=c;
    }
    char ch[100]={0};
    for(int i=0,cnt=0;*(niza+i)!=0;i++)
    {
        if(*(niza+i)=='\n') cnt++;
        if(cnt==index)
        {
            for(int t=0;t<dolzina[index]+1;t++)
            {
                ch[t]=*(niza+i);
                i++;
            }

            break;
        }
    }
    int prvo, posledno;
    for(int i=0;*(ch+i)!=0;i++)
    {
        if(*(ch+i)>='0' && *(ch+i)<='9')
        {
            prvo=i;
            break;
        }
    }
    for(int i=99;i>=0;i--)
    {
        if(*(ch+i)>='0' && *(ch+i)<='9')
        {
            posledno=i;
            break;
        }
    }
    for(int i=prvo;i<=posledno;i++) printf("%c",*(ch+i));

    printf("\n");
    system("pause");
    fclose(f);
    return 0;
}
