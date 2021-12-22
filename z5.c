#include<stdio.h>
#include<stdbool.h>

bool eRastecki(int num,bool t)
{
    if(num<10)  return 1;
    if(!t)  return 0;
    num/=10;
    t=(num/10)%10<num%10;
    return eRastecki(num,t);

}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(eRastecki(arr[i],((arr[i]/10)%10)<arr[i]%10))    printf("DA\n");
        else    printf("NE\n");
    }
    printf("\n");
    system("pause");

    return 0;
}
