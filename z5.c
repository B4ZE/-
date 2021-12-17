#include<stdio.h>

// 19=prva god, 18=vtora god, 17=treta god, 16=chetvrta god, 15=petta god,14=shesta god...-->
float absolute(float a)
{
    return a*(a>=0)-a*(a<0);
}

int main()
{
    int index;
    int p=6;
    int ocenki[p];
    float prosek=0;
    int godina=1;
    scanf("%d",&index);
    godina += absolute(index/10000-19);
    for(int i=0;i<6;i++)
    {
        scanf("%d",&ocenki[i]);
        prosek+=ocenki[i];
    }
    prosek/=(float)p;
    printf("Prosek: %0.3f\n",prosek);
    printf("Student: %d\n",index);
    printf("%d godina\n",godina);
    printf("Nagraden: ");
    if(prosek>=9.5) printf("1");
    else printf("0");

    printf("\n");
    system("pause");
    return 0;
}
