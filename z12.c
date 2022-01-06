#include<stdio.h>

int bPoz(int *p,int n,int i)
{
    if(i==n-1)  return (*(p+i)>0);
    else    return (*(p+i)>0)+bPoz(p,n,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int niza[n];
    for(int i=0;i<n;i++)    scanf("%d",&niza[i]);
    printf("%d\n",bPoz(niza,n,0));
    system("pause");
    return 0;
}
