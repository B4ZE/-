#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
        scanf("%d",&arr[i]);
    int k;
    scanf("%d",&k);
    int nPomali=0;
    int nPogolemi=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]<k)    nPomali++;
        else    nPogolemi++;
    }
    int pomali[nPomali];
    int pogolemi[nPogolemi];
    for(int i=0,a=0,b=0;i<N;i++)
    {
        if(arr[i]<k)
        {
            pomali[a]=arr[i];
            a++;
        }else
        {
            pogolemi[b]=arr[i];
            b++;
        }
    }
    int nova[N];
    for(int i=0;i<nPomali;i++)
        nova[i]=pomali[i];
    for(int i=nPomali,t=0;i<N;i++,t++)
        nova[i]=pogolemi[t];
    for(int i=0;i<N;i++)
        printf("%d ",nova[i]);
    printf("\n");
    system("pause");
    return 0;
}
