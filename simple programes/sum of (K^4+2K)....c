#include <stdio.h>
#include <math.h>
int main()
{
    int n,k,sum=0,t,h;
    printf("enter the last number of this seres: \t");
    scanf("%d",&n);
    for(k=1,h=2;k<=n;k++,h=h+2)
    {
        sum=sum+pow(k,4)+.5+h;
    }
    printf("\nsum of the seres is:  %d",sum);
    return 0;
}
