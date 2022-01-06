#include<stdio.h>
#include<limits.h>

void selection_sort(int a[], int m, int n)
{
    if (n - m == 1) return;
    int smallest = a[m];
    int smallest_index = m;
    int i;
    for (i = m; i < n; ++i)
        if (a[i] < smallest)
        {
            smallest = a[i];
            smallest_index = i;
        }
    int t=a[m];
    a[m]=a[smallest_index];
    a[smallest_index]=t;
    selection_sort(a, m+1, n);

}

void p(int *ptr,int ind,int g)
{
    if(ind==g-1)
    {
        if(*(ptr+ind)==9)   *(ptr+ind)=7;
        return;
    }
    if(*(ptr+ind)==9) *(ptr+ind)=7;
    p(ptr,ind+1,g);
}

int main()
{
    int b;
    int arr[100]= {0};
    int ind;
    for(ind=0; scanf("%d",&b); ind++) arr[ind]=b;
    int arr2[ind];
    for(int i=0; i<ind; i++) arr2[i]=arr[i];
    for(int i=0; i<ind; i++)
    {
        int t=arr2[i], nCifri=0;
        while(t>0)
        {
            nCifri++;
            t/=10;
        }
        int broj[nCifri];
        for(int k=nCifri-1; k>=0; k--)
        {
            broj[k]=arr[i]%10;
            arr[i]/=10;
        }
        p(broj,0,nCifri);
        int B=broj[0];
        for(int i=1; i<nCifri; i++)
        {
            B*=10;
            B+=broj[i];
        }
        arr2[i]=B;
    }
    selection_sort(arr2,0,ind);
    for(int i=0;i<ind;i++)  if(i<5)    printf("%d ",arr2[i]);

    printf("\n");
    system("pause");
    return 0;
}
