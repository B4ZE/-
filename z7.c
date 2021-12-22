#include<stdio.h>

int sumOfDigits(int number)
{
    if(number<10)   return number;
    else    return  number%10+sumOfDigits(number/10);
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    printf("\n");
    system("pause");

    return 0;
}
