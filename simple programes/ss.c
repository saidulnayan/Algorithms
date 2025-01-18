#include<stdio.h>
int main()
{
    int n,i,j,k=1,t,sum=0;

    printf("\t\t\t\"1^2+2^3+3^4+4^5+.....+n^(n+1)\"\n\n\n");

    gt:
    printf("enter the last number of the series:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
             t=i;
            k=k*t;
        }

    sum=sum+k;
    k=1;

    }
    printf("the sum of the series is:  %d",sum);
    printf("\n\n========== thank you ==========\n\n");

    goto gt;
   getch();
}
