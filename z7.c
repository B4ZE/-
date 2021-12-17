#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][100];
    int dolzinaNaNiza[N];
    int nOgledalni[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&dolzinaNaNiza[i]);
        for(int k=0;k<dolzinaNaNiza[i];k++)
        {
            scanf("%d",&arr[i][k]);
        }
        nOgledalni[i]=0;
    }

    for(int i=0;i<N;i++)
    {
        for(int k=0,t=dolzinaNaNiza[i]-1;k<dolzinaNaNiza[i];k++,t--)
        {
            if(arr[i][k]==arr[i][t])
            {
                nOgledalni[i]++;
            }
        }
        printf("%.2f%%\n",100.0*nOgledalni[i]/(float)dolzinaNaNiza[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
