#include<stdio.h>

int main()
{
    int broj;
    int p1, p2;
    scanf("%d",&broj);
    int eEdnakov=0;
    float it=0;
    do
    {
        scanf("%d%d",&p1,&p2);
        if(p1+p2==broj) eEdnakov++;
        it++;
    }
    while(p1!=0 || p2!=0);
    it--;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",eEdnakov,broj,broj,100*(float)eEdnakov/it);
    printf("\n");
    system("pause");
    return 0;
}
