#include<stdio.h>

int main()
{
    float bmi, m, l;
    scanf("%f%f",&m,&l);
    l/=100;
    bmi=m/(l*l);
    printf("%.2f",bmi);
    printf("\n");
    system("pause");
    return 0;
}
