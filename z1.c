#include<stdio.h>
#include<string.h>

void matematickaOperacija(int a,int b,char c,int *res)
{
    switch(c)
    {
    case '+':
        *res=a+b;
        break;
    case '-':
        *res=a-b;
        break;
    case '*':
        *res=a*b;
        break;
    case '/':
        *res=a/b;
        break;
    case '%':
        *res=a%b;
        break;
    }
}

int main ()
{

    int a,b,rezultat;
    scanf("%d %d", &a, &b);
    char * operacii = "+-*/%";
    for (int i=0;i<strlen(operacii);i++)
    {
        matematickaOperacija(a,b,operacii[i],&rezultat);
        printf("%d %c %d -> %d\n", a, operacii[i], b, rezultat);
    }
    printf("\n");
    system("pause");
	return 0;
}
