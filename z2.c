#include<stdio.h>
#include<math.h>

int main()
{
    int broj, range = pow(10,9);
    scanf("%d",&broj);
    if(broj<9)  printf("Brojot ne e validen");
    else
    for(int i=broj; i>0; i--)
    {
        int b=i;
        int nCifri=1;
        for(int k=10; k<range; k*=10)
        {
            if(b<k) break;
            nCifri++;
        }
        int pal=0;
        while(b>0)
        {
            int last = b%10;
            pal=pal*10+last;
            b/=10;
        }
        if(pal%nCifri==0)
        {
            printf("%d",i);
            break;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
