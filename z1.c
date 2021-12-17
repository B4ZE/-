#include<stdio.h>
#include<math.h>
#include<limits.h>

int main()
{
    int N;
    scanf("%d",&N);
    int min=INT_MAX;
    while(N>0)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int d = abs(a-b) + abs(b-c);
        if(d<min)   min = d;
        N--;
    }
    printf("%d",min);
    printf("\n");
    system("pause");

    return 0;
}
