#include<stdio.h>
#include<string.h>
#include<ctype.h>

void writeToFile()
{
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#')   fputc(c, f);
    fclose(f);
}

int main()
{
    writeToFile();
    FILE *f = fopen("text.txt","r");
    fseek(f,0,SEEK_SET);
    int redovi=0;
    int zboroviVo[100];
    for(int i=0;i<100;i++)  zboroviVo[i]=-1;
    char line[1024];
    while(fgets(line,1024,f)!=NULL)
    {
        line[strlen(line)-1]=0;
        int z=0;
        for(int i=0;*(line+i)!=0;i++)   if(*(line+i)==32)  z++;
        zboroviVo[redovi]=z+1;
        redovi++;
    }
    for(int i=0;i<100;i++)
    {
        if(zboroviVo[i]==-1)    break;
        printf("%d\n",zboroviVo[i]);
    }
    int s=0;
    for(int i=0;i<redovi;i++)   s+=zboroviVo[i];
    printf("%.2f\n",s/(float)redovi);
    fseek(f,0,SEEK_SET);
    int index=0;
    int zb=0;
    for(int i=0;i<redovi;i++)
    {
        if(zb<zboroviVo[i])
        {
            index=i;
            zb=zboroviVo[i];
        }
    }
    for(int i=0;fgets(line,1024,f)!=NULL;i++)
    {
        line[strlen(line)-1]=0;
        if(i==index)
        {
            for(int t=0;*(line+t)!=0;t++)
            {
                if(tolower(*(line+t))==*(line+t))   printf("%c",toupper(*(line+t)));
                else    printf("%c",tolower(*(line+t)));
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
