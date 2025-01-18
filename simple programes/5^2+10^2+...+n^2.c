#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i=5;
    while(i<=n)
    {
        sum=sum+pow(i,2)+.5;
        i=i+5;
    }
    printf("%d",sum);
    return 0;
}
