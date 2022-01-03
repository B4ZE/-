#include <stdio.h>
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
    FILE *f = fopen("text.txt", "r");
    int mali=0,golemi=0,count=0;
    char line[1024];
    fgets(line,1024,f);
    for(int i=0;i<strlen(line);i++)
    {
        char c=*(line+i);
        if(c=="#") break;
        if(!isalpha(c)) continue;
        if(tolower(c)==c)   mali++;
        if(toupper(c)==c)   golemi++;
        count++;
    }
    printf("%.4f\n",golemi/(float)count);
    printf("%.4f",mali/(float)count);
    fclose(f);

    printf("\n");
    system("pause");
    return 0;
}
