#include<stdio.h>
#include<float.h>

double min(double *ptr, int n)
{
    double min=100000.0;
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)<min)    min=*(ptr+i);
    }
    return min;
}

double max(double *ptr, int n)
{
    double max=0.0;
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)>max)    max=*(ptr+i);
    }
    return max;
}

void normalize(double *ptr, int n)
{
    double mn=min(ptr,n);
    double mx=max(ptr,n);
    for(int i=0;i<n;i++)
    {
        *(ptr+i)=(*(ptr+i)-mn) / (mx - mn);
    }
}

int main ()
{
    double niza[200];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)   scanf("%lf", &niza[i]);
    double mn=min(niza,n);
    double mx=max(niza,n);
    printf("MAX -> %.3f\n",mx);
    printf("MIN -> %.3f\n",mn);
    normalize(niza,n);
    for(int i=0;i<n;i++) printf("%.3f ",niza[i]);
    printf("\n");
    system("pause");

    return 0;
}

