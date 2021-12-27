#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

#define N 100

void calc(char *ptr1,char *ptr2,char *z)
{
    for(int i=0; i<N; i++)
    {
        if(*(z+i)==0)   break;
        if(*(z+i)>=65 && *(z+i)<=90)
        {
            *(z+i)+=32;
        }
    }
    char *pomal="pomal";
    bool ePomal=true;
    for(int i=0; i<6; i++)
    {
        if(*(z+i)!=*(pomal+i))
        {
            ePomal=false;
            break;
        }
    }
    char *pogolem="pogolem";
    bool ePogolem=true;
    for(int i=0; i<8; i++)
    {
        if(*(z+i)!=*(pogolem+i))
        {
            ePogolem=false;
            break;
        }
    }
    if(ePomal==0 && ePogolem==0)
    {
        printf("Invalid comparator");
        return;
    }
    char reversed1[N];
    char reversed2[N];
    int index1=0;
    int index2=0;
    for(int i=0; i<N; i++)
    {
        if(*(ptr1+i)==0)    break;
        index1++;
    }
    for(int i=0; i<N; i++)
    {
        if(*(ptr2+i)==0)    break;
        index2++;
    }
    for(int i=0,j=index1-1; i<index1; i++,j--)
    {
        *(reversed1+i)=*(ptr1+j);
    }
    *(reversed1+index1)=0;
    for(int i=0,j=index2-1; i<index2; i++,j--)
    {
        *(reversed2+i)=*(ptr2+j);
    }
    *(reversed2+index2)=0;
    bool seEdnakvi=true;
    for(int i=0; *(reversed1+i)!=0; i++)
    {
        if(*(reversed1+i)!=*(reversed2+i))
        {
            seEdnakvi=false;
            break;
        }
    }
    if(seEdnakvi)
    {
        for(int i=0; *(reversed1+i)!=0; i++)
            printf("%c",*(reversed1+i));
        return;
    }
    if(*(reversed1)!=*(reversed2))
    {
        if(*(reversed1)>*(reversed2))
        {
            if(ePogolem)
            {
                for(int i=0; *(reversed1+i)!=0; i++)
                    printf("%c",*(reversed1+i));
                return;
            }
            if(ePomal)
            {
                for(int i=0; *(reversed2+i)!=0; i++)
                    printf("%c",*(reversed2+i));
                return;
            }
        }
        else
        {
            if(ePogolem)
            {
                for(int i=0; *(reversed2+i)!=0; i++)
                    printf("%c",*(reversed2+i));
                return;
            }
            if(ePomal)
            {
                for(int i=0; *(reversed1+i)!=0; i++)
                    printf("%c",*(reversed1+i));
                return;
            }
        }
    }else
    {
        if(*(reversed1+1)>*(reversed2+1))
        {
            if(ePogolem)
            {
                for(int i=0; *(reversed1+i)!=0; i++)
                    printf("%c",*(reversed1+i));
                return;
            }
            if(ePomal)
            {
                for(int i=0; *(reversed2+i)!=0; i++)
                    printf("%c",*(reversed2+i));
                return;
            }
        }
        else
        {
            if(ePogolem)
            {
                for(int i=0; *(reversed2+i)!=0; i++)
                    printf("%c",*(reversed2+i));
                return;
            }
            if(ePomal)
            {
                for(int i=0; *(reversed1+i)!=0; i++)
                    printf("%c",*(reversed1+i));
                return;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char prvStr[N], vtorStr[N];
    char znak[N];
    char res[N];
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<N; i++)
        {
            char c=getchar();
            if(c=='\n')
            {
                *(prvStr+i)=0;
                break;
            }
            else   *(prvStr+i)=c;
        }
        for(int i=0; i<N; i++)
        {
            char c=getchar();
            if(c=='\n')
            {
                *(vtorStr+i)=0;
                break;
            }
            else   *(vtorStr+i)=c;
        }
        for(int i=0; i<N; i++)
        {
            char c=getchar();
            if(c=='\n')
            {
                *(znak+i)=0;
                break;
            }
            else   *(znak+i)=c;
        }
        calc(prvStr,vtorStr,znak);
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
