#include<stdio.h>

int main()
{
    float Ax,Ay,Bx,By,Cx,Cy;
    scanf("%f%f",&Ax,&Ay);
    scanf("%f%f",&Bx,&By);
    scanf("%f%f",&Cx,&Cy);
    float AB, BC, CA;
    AB=sqrt((Bx-Ax)*(Bx-Ax)+(By-Ay)*(By-Ay));
    BC=sqrt((Cx-Bx)*(Cx-Bx)+(Cy-By)*(Cy-By));
    CA=sqrt((Ax-Cx)*(Ax-Cx)+(Ay-Cy)*(Ay-Cy));
    if(AB>BC && AB>CA) printf("AB");
    if(BC>AB && BC>CA) printf("BC");
    if(CA>AB && CA>BC) printf("CA");

    printf("\n");
    system("pause");
    return 0;
}
