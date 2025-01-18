#include <stdio.h>
int sum(int *p,int *q)
{
    int sum,a,b;
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("%d",sum);
    return 0;
}
int main()
{
    int x,y;
    sum(&x,&y);
    return 0;
}
