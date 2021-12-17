#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a = ++x - --y + z++ + (x>z);
    int b = ++x - --y + z++ + x>z;
    printf("%d %d",a,b);
    printf("\n");
    system("pause");
    return 0;
}
