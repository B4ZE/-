#include<stdio.h>
#include <stdbool.h>
//(32–47 / 58–64 / 91–96 / 123–126) range of special characters

int main()
{
    int size=3;
    char str[size];
    scanf("%s",str);
    bool arr1[size];
    bool arr2[size];
    for(int i=0;i<size;i++)
    {
        int t=str[i];
        if((t>=32 && t<=47) || (t>=58 && t<=64) || (t>=91 && t<=96) || (t>=123 && t<=126))  arr1[i]=0;
        else arr1[i]=1;
        if((t>=65 && t<=90) || (t>=97 && t<=122)) arr2[i]=0;
        else arr2[i]=1;
    }
    for(int i=0;i<size;i++)
        printf("%d",arr1[i]);
    printf("\n");
    for(int i=0;i<size;i++)
        printf("%d",arr2[i]);
    return 0;
}
