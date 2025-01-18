#include <stdio.h>
int main()
{
    int i,n,s=0;
    printf("1*2+2*2+3*2+.....n*2\n");
    printf("enter the value of n :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       s=s+i*2;
    }
    printf("sum of the seres is:  %d",s);
    return 0;
}
