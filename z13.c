#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int indexi[n];
    for(int i=0;i<n;i++)
        scanf("%d",&indexi[i]);
    printf("Grupa 1\n");
    for(int i=0;i<n;i++)
    {
        if(indexi[i]%10==0 || indexi[i]%10==1 || indexi[i]%10==2)
        printf("%d ",indexi[i]);
    }
    printf("\nGrupa 2\n");
    for(int i=0;i<n;i++)
    {
        if(indexi[i]%10==3 || indexi[i]%10==4 || indexi[i]%10==5)
        printf("%d ",indexi[i]);
    }
    printf("\nGrupa 3\n");
    for(int i=0;i<n;i++)
    {
        if(indexi[i]%10==6 || indexi[i]%10==7 || indexi[i]%10==8 || indexi[i]%10==9)
        printf("%d ",indexi[i]);
    }

    return 0;
}
