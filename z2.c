#include <stdio.h>
#include<string.h>

void writeToFile()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#')   fputc(c, f);
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    int matrix[n][n];
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            fscanf(fin,"%d",&matrix[x][y]);
        }
    }
    FILE *fout = fopen("output.txt","w");
    int s=0;
    for(int y=0,x=0;x<n;x++,y++)    s+=matrix[x][y];
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(y<x)
            {
                if(s<10)  fprintf(fout,"00");
                else if(s>-10 && s<100)    fprintf(fout,"0");
                fprintf(fout,"%d ",s);
            }else   fprintf(fout,"    ");
        }
        fprintf(fout,"\n");
    }
    fseek(fout,0,SEEK_SET);
    printFile();

    printf("\n");
    system("pause");
    return 0;
}
