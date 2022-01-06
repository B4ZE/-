#include <stdio.h>

void wtf()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#')   fputc(c, f);
    fclose(f);
}

int main()
{
    wtf();
    FILE *f=fopen("input.txt","r");
    char niza[2000]={0};
    int redovi=0;
    for(int i=0;1;i++)
    {
        char c=fgetc(f);
        if(feof(f)) break;
        if(c=='\n') redovi++;
        niza[i]=c;
    }
    int brojCifri[redovi];
    for(int i=0;i<redovi;i++)   brojCifri[i]=0;
    for(int i=0,red=0;*(niza+i)!=0;i++)
    {
        if(*(niza+i)>='0' && *(niza+i)<='9')    brojCifri[red]++;
        if(*(niza+i)=='\n') red++;
    }
    int kolku[10]={0};
    for(int i=0,red=0,red2=-1;*(niza+i)!=0;i++)
    {
        if(red2!=red)
        {
            red2=red;
            printf("%d:",brojCifri[red2]);
        }
        if(*(niza+i)>='0' && *(niza+i)<='9')
        {
            kolku[*(niza+i)-48]++;
        }
        if(*(niza+i)=='\n')
        {
            for(int i=0;i<10;i++)   for(int j=0;j<kolku[i];j++) printf("%d",i);
            red++;
            printf("\n");
            for(int i=0;i<10;i++)   kolku[i]=0;
        }
    }
    fclose(f);
    printf("\n");
    system("pause");
    return 0;
}
