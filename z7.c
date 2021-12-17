#include<stdio.h>
/*
0-50 = 5
51-60 = 6
61-70 = 7
71-80 = 8
81-90 = 9
91-100 = 10

posledna cifra na poeni ako e:
1 - 3 = "-"
4 - 7 = " "
8-0 = "+"
*/

int main()
{
    int poeni;
    scanf("%d",&poeni);
    int ocenka;
    if(poeni>=0 && poeni<=100)
    {
        if(poeni>=0 && poeni<=50)   ocenka=5;
        if(poeni>=51 && poeni<=60)  ocenka=6;
        if(poeni>=61 && poeni<=70)  ocenka=7;
        if(poeni>=71 && poeni<=80)  ocenka=8;
        if(poeni>=81 && poeni<=90)  ocenka=9;
        if(poeni>=91 && poeni<=100)  ocenka=10;
        printf("%d",ocenka);
        if(poeni%10>=1 && poeni%10<=3) printf("-");
        if(poeni%10>=4 && poeni%10<=7) printf(" ");
        if(poeni%10==0 || poeni%10==8 || poeni%10==9) printf("+");
    }else printf("Nevalidna vrednost za poeni!");
    printf("\n");
    system("pause");
    return 0;
}
