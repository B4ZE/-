#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    fgets(str,200,stdin);
    int cena[str[0]-48];
    float DDV[str[0]-48];
    for(int i=0; i<str[0]-48; i++)
    {
        cena[i]=0;
        DDV[i]=-1;
    }
    int count2=0;
    for(int i=2; i<strlen(str); i++)
    {
        switch(str[i])
        {
        case 'A':
        {
            DDV[count2]=0.18;
            count2++;
        }
        break;
        case 'B':
        {
            DDV[count2]=0.05;
            count2++;
        }
        break;
        case 'V':
        {
            DDV[count2]=0.0;
            count2++;
        }
        break;
        }

    }
    int count=0;
    for(int i=2; i<strlen(str)-1; i++)
    {
        if(str[i]==' ')
        {
            count++;
            if(str[i+1]=='A' || str[i+1]=='B' || str[i+1]=='V')
            {
                i+=3;
            }
        }
        cena[count]=cena[count]*10+str[i]-48;
    }
    for(int i=0;i<str[0]-48;i++)
    {
        printf("%d ",cena[i]);
    }
    //printf("%d",cena[1]);
    /*
    for(int i=0;i<str[0]-48;i++)
    {
        printf("%d %.2f%% ",cena[i],DDV[i]);
    }
    float vkupnoDDV=0;
    for(int i=0;i<str[0]-48;i++)
        vkupnoDDV+=cena[i]*DDV[i];
    vkupnoDDV*=0.15;
    printf("Total tax return is: %.2f",vkupnoDDV);
    */
    return 0;
}
