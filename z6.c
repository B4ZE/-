#include<stdio.h>

int main()
{
    char str[5];
    scanf("%s", str);
    int arr[5];
    for(int i=0;i<5;i++)
        arr[i]=str[i]-48;
    printf("%d %d %d",arr[0]+arr[4],arr[1]+arr[3],arr[2]);
    printf("\n");
    system("pause");
    return 0;
}
