#include<stdio.h>

int main()
{
    char str[9];
    scanf("%s",str);
    int b[9];
    for(int i=0;i<9;i++)
        b[i]=str[i]-48;
    printf("%d%d%d/",b[0],b[1],b[2]);
    printf("%d%d%d-",b[3],b[4],b[5]);
    printf("%d%d%d ",b[6],b[7],b[8]);
    if(b[2]>=0 && b[2]<=2) printf("T-mobile");
    else if(b[2]>=5 && b[2]<=8) printf("A1");
    else if(b[2]==9) printf("Lycamobile");
    printf("\n");
    system("pause");
    return 0;
}
