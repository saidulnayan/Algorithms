#include <stdio.h>
#include <math.h>
int main()
{
    float h,m,t;
    printf("enter your time:\n");
    printf("enter hour:");
    scanf("%f",&h);
    printf("enter minute:");
    scanf("%f",&m);
    if(h>12)
    {
        h=h-12;
    }
    t=(30*h)-(11*m)/2;
    t=fabs(t);
    printf("the angle between hour & minute hand is:  %.2f",t);
    getch();
}

