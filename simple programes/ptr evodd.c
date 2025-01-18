#include <stdio.h>
int evodd(int *x)
{
    int s;
    s=&x;
    scanf("%d",&s);
    if(x%2==0)
        printf("%d is even",x);
    else
        printf("%d is odd",x);
        return 0;
}

int main()
{
    int a,*p;
    p=&a;
  evodd(*p);
    return 0;
}
