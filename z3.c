#include<stdio.h>

int main()
{
    int range = pow(10,9);
    int num;
    int nCifri=1;
    scanf("%d",&num);
    for(int i=10; i<range; i*=10)
    {
        if(num<i) break;
        nCifri++;
    }
    int cifri[nCifri];
    int kolega1[nCifri];
    int kolega2[nCifri];
    for(int i=0;i<nCifri;i++)
    {
        cifri[i]=num%10;
        num/=10;
    }
    int counter=0;
    for(int i=0;i<nCifri;i++)
    {
        if(cifri[i]==5) counter++;
    }
    if(!(counter>=2)) printf("Error");
    else
    {
        for(int i=nCifri-1,t=0;i>=0;i--)
        {
            kolega1[t]=cifri[i];
            t++;
        }
        for(int i=0;i<nCifri;i++)
        {
            if(kolega1[i]==5) kolega2[i]=6;
            else kolega2[i]=kolega1[i];
        }
        int k1=0,k2=0;
        for(int i=0;i<nCifri;i++)
        {
            k1 = k1*10 + kolega1[i];
            k2 = k2*10 + kolega2[i];
        }
        if(k1>k2)
        {
            float x;
            x=(float)k1/k2;
            x-=1.0;
            x=x*100;
            printf("%.4f%%",x);
        }
        else
        {
            float x;
            x=(float)k2/k1;
            x-=1;
            x=x*100;
            printf("%.4f%%",x);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
