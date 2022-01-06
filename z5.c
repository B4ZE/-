#include<stdio.h>

void wf()
{
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#')   fputc(c, f);
    fclose(f);
}

int main()
{
    wf();
    FILE *f=fopen("livce.txt","r");
    fseek(f,0,SEEK_SET);
    int uplata;
    fscanf(f,"%d",&uplata);
    char c=(char)fgetc(f);
    char naj[100]= {0};
    float NAJ=0;
    float p=(float)uplata;
    do
    {
        char shifra[10];
        for(int i=0; 1; i++)
        {
            c=(char)fgetc(f);
            if(c==' ')
            {
                *(shifra+i)=0;
                break;
            }
            *(shifra+i)=c;
        }
        char tip;
        fscanf(f,"%c",&tip);
        fgetc(f);
        float koeficient;
        fscanf(f,"%f",&koeficient);
        p*=koeficient;
        if(koeficient>NAJ)
        {
            for(int i=0;i<100;i++)  naj[i]=0;
            NAJ=koeficient;
            int brojac;
            for(brojac=0; *(shifra+brojac)!=0; brojac++)    naj[brojac]=*(shifra+brojac);
            naj[brojac]=' ';
            brojac++;
            naj[brojac]=tip;
        }
        fgetc(f);
        if(fgetc(f)==EOF)    break;
        fseek(f,-1,SEEK_CUR);
    }
    while(1);
    for(int i=0;*(naj+i)!=0;i++)    printf("%c",*(naj+i));
    printf(" %.2f",NAJ);
    printf("\n%.2f",p);
    fclose(f);
    printf("\n");
    system("pause");
    return 0;
}
