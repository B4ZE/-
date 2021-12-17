#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int poeni[n];
    int brojPominati=0,brojPadnati=0;
    int sumPominati=0,sumPadnati=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&poeni[i]);
        if(poeni[i]>=50)
        {
            brojPominati++;
            sumPominati+=poeni[i];
        }
        else
        {
            brojPadnati++;
            sumPadnati+=poeni[i];
        }
    }
    printf("Sredna vrednost na padnati %.2f\n",(float)sumPadnati/brojPadnati);
    for(int i=0;i<n;i++)
        if(poeni[i]<50) printf("%d ",poeni[i]);
    printf("\nSredna vrednost na polozeni %.2f\n",(float)sumPominati/brojPominati);
    for(int i=0;i<n;i++)
        if(poeni[i]>=50) printf("%d ",poeni[i]);

    return 0;
}
