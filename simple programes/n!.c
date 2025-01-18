#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("1*2*3*......*n");
    printf("\nenter the last number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("\nfactorial of %d is:%d",n,sum);
    return 0;
}

