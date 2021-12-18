#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int max=-1000,min=1000;
    for(int i=0;i<n;i++)
    {
        int b;
        scanf("%d",&b);
        if(b>max)
            max=b;
        if(b<min)
            min=b;
    }
    printf("Najgolema razlika: %d",max-min);
    printf("\n");
    system("pause");
    return 0;
}
