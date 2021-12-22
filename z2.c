#include<stdio.h>

void elka(int n)
{
    int pol=n/2;
    int pol2=n/2;
    for(int y=0;y<(n/2)+1;y++)
    {
        for(int x=0;x<n;x++)
        {
            if(pol<=x && x<=pol2)   printf("*");
            else    printf(" ");
        }
        pol--;
        pol2++;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    elka(n);
    printf("\n");
    system("pause");

    return 0;
}
