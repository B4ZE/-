#include<stdio.h>

int main()
{
    int pari;
    scanf("%d",&pari);
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        pari+=arr[i];
    }
    if(pari>0) printf("1");
    else printf("0");
    printf("\n");
    system("pause");
    return 0;
}
