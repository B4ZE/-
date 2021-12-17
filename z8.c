#include<stdio.h>
#include <stdbool.h>

int main()
{
    int d,m,y;
    scanf("%d%d%d",&d,&m,&y);
    bool valid;
    if(m>=1 && m<=12)
    {
        if(m==2)
        {
            if((y%400==0 || y%100!=0) && (y%4==0))
            {

                if(d>=1 && d<=29) valid = true;
                else    valid = false;
            }else
            {
                if(d>=1 && d<=28)   valid = true;
                else valid = false;
            }
        }
        else
        {
            if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                //31 days
                if(d>=1 && d<=31)   valid = true;
                else    valid = false;

            }
            else
            {
                //30 days
                if(d>=1 && d<=30)   valid = true;
                else    valid = false;
            }
        }
    }
    else valid = false;
    if(valid) printf("DA");
    else printf("NE");
    printf("\n");
    system("pause");
    return 0;
}
