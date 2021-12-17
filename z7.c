#include<stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    if(m>2)
        for(int y=0; y<m; y++)
        {
            for(int x=0; x<m; x++)
            {
                if(x==0 || x==m-1) printf("%%");
                else if(y==0 || y==m-1) printf("@");
                else printf(".");
            }
            printf("\n");
        }
    printf("\n");
    system("pause");
    return 0;
}
