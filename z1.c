#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    if(b!=0) printf("a / b = %d\n",a/b);
    if(b!=0) printf("a %% b = %d\n",a%b);
    printf("\n");
    system("pause");
    return 0;
}
