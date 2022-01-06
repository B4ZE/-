#include<stdio.h>
#include<stdbool.h>

void wtf()
{
    FILE *f = fopen("podatoci.txt", "w");
    char prv,vtor;
    while(1)
    {
        prv=getchar();
        vtor=getchar();
        if(vtor=='#') break;
        fprintf(f,"%c",prv);
        fprintf(f,"%c",vtor);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE *f=fopen("podatoci.txt","r");
    char c1,c2;
    getchar();
    c1=getchar();
    c2=getchar();
    bool novaLinija=true;
    while(1)
    {
        char c=fgetc(f);
        if(feof(f))    break;
        if(c=='\n') novaLinija=true;
        if(c==c1 && novaLinija)
        {
            novaLinija=false;
            c=fgetc(f);
            while(c!=c2)
            {
                printf("%c",c);
                c=fgetc(f);
            }
            printf("\n");
        }
    }
    fclose(f);
    printf("\n");
    system("pause");
    return 0;
}
