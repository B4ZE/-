#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int pomal, pogolem;
    scanf("%d%d",&pomal,&pogolem);
    if(pomal<=0 || pogolem <=0) printf("Invalid input");
    else
    {
        if(pomal>pogolem)
        {
            int temp = pomal;
            pomal = pogolem;
            pogolem = temp;
        }

        int range = pow(10,9);
        int nCifri=1;
        for(int i=10; i<range; i*=10)
        {
            if(pogolem<i) break;
            nCifri++;
        }
        pogolem/=10;
        nCifri--;
        bool eParenEkvivalent = true;
        for(int i=0; i<nCifri; i++)
        {
            if(pogolem%10!=pomal%10)
            {
                eParenEkvivalent = false;
                break;
            }
            pogolem/=10;
            pogolem/=10;
            pomal/=10;
        }
        if(eParenEkvivalent)    printf("PAREN");
        else    printf("NE");
    }
    printf("\n");
    system("pause");
    return 0;
}
