#include<stdio.h>
#include<string.h>
#define MAX 100

void wtf()
{
    FILE *f = fopen("broevi.txt", "w");
    int n;
    do
    {
        scanf("%d",&n);
        if(n==0)    fprintf(f,"%d",n);
        else    fprintf(f,"%d ",n);
        for(int i=0; i<n; i++)
        {
            int t;
            scanf("%d",&t);
            if(i==n-1)   fprintf(f,"%d",t);
            else    fprintf(f,"%d ",t);
        }
        if(n!=0)    fprintf(f,"\n");
    }
    while(n!=0);
    fclose(f);
}

int main()
{
    wtf();
    FILE *f = fopen("broevi.txt","r");
    fseek(f,0,SEEK_SET);
    int n;
    do
    {
        fscanf(f,"%d",&n);
        if(n==0)    break;
        int niza[n];
        int index=-1;
        int max=0;
        for(int i=0;i<n;i++)
        {
            fscanf(f,"%d",&niza[i]);
            int temp=niza[i];
            while(temp>=10)  temp/=10;
            if(temp>max)
            {
                max=temp;
                index=i;
            }
        }
        printf("%d\n",niza[index]);
    }
    while(n!=0);

    fclose(f);
    printf("\n");
    system("pause");
    return 0;
}
