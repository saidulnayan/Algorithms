#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0;
    printf("1^2+2^2+3^2+.......\n");
    printf("enter the last number of this seres: \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("\nsum of the seres is:  %d",sum);
    return 0;
}
