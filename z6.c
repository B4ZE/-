///poprajte si ja zadacata

#include<stdio.h>

int main()
{
    int M;
    scanf("%d",&M);
    float taxReturn[M];
    int Sum[M];
    for(int i=0; i<M; i++)
    {
        int n;
        scanf("%d",&n);
        float tax=0;
        int s=0;
        for(int t=0; t<n; t++)
        {
            int cena;
            char c;
            float ddv;
            scanf("%d %c",&cena,&c);
            switch(c)
            {
            case 'A':
                ddv=0.18;
                break;
            case 'B':
                ddv=0.05;
                break;
            case 'V':
                ddv=0.0;
                break;
            }
            tax+=cena*ddv;
            s+=cena;
        }
        tax*=0.15;
        taxReturn[i]=tax;
        Sum[i]=s;
    }
    for(int i=0;i<M;i++)
    {
        if(Sum[i]>30000) printf("Sum %d is bigger than 30000\n",Sum[i]);
        else printf("Total tax return is: %.2f\n",taxReturn[i]);
    }
    int max=-1;
    float maxTax=-1;
    for(int i=0;i<M;i++)
    {
        if(Sum[i]<30000)
        {
            if(Sum[i]>max)  max=Sum[i];
            if(taxReturn[i]>maxTax) maxTax=taxReturn[i];
        }
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f",max,maxTax);
    printf("\n");
    system("pause");
    return 0;
}
