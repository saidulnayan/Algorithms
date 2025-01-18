#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,*p;

    printf ("enter two num:\n");
    scanf("%d%d",&a,&b);
    p=*&a;
    a=*&b;
    b=*&p;


    printf("after swap: %d%d", a,b);
    return 0;
}
