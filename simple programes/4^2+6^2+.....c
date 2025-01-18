#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0;
    printf("4^2+6^2+8^2+.......+n^2\n");
    printf("enter the value of n: \t");
    scanf("%d",&n);
    for(i=4;i<=n;i=i+2)
    {
        sum=sum+pow(i,2);
    }
    printf("\nsum of the seres is:  %d",sum);
    return 0;
}

