#include<stdio.h>

int main()
{
    int range = pow(10,9);
    int nCifri=1;
    char str[7];
    scanf("%s",str);
    int arr[7];
    for(int i=0;i<7;i++)
        arr[i]=str[i]-48;
    int day = arr[0]*10+arr[1];
    int month = arr[2]*10+arr[3];
    int year = 1000+arr[4]*100+arr[5]*10+arr[6];
    int username = day*100+month*1000+year;
    for(int i=10; i<range; i*=10)
    {
        if(username<i) break;
        nCifri++;
    }
    if(nCifri!=5 && nCifri==4)
    {
        if(year<=1960)  username += 70000;
        if(year>=1961 && year<=1980)    username+=80000;
        if(year>=1981 && year<=1999)    username+=90000;
    }
    printf("%d\n",username);
    system("pause");
    return 0;
}
