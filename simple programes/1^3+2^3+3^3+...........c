#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0;
    printf("1^3+2^3+3^3+.......+n^3\n");
    printf("enter the value of n: \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,3);
    }
    printf("\nsum of the seres is:  %d",sum);
    return 0;
}
