#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

bool isVowel(char c)
{
    c=tolower(c);
    return c=='a' || c=='e' || c=='u' || c=='o' || c=='i';
}

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
    char line[1024];
    int count=0;
    char first=(char)fgetc(f);
    char second=(char)fgetc(f);
    while(second!=EOF)
    {
        if(isVowel(first) && isVowel(second))
        {
            printf("%c%c\n",tolower(first),tolower(second));
            count++;
        }
        first=second;
        second=(char)fgetc(f);
    }
    printf("%d",count);
    fclose(f);
    printf("\n");
    system("pause");
    return 0;
}
