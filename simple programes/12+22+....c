#include <stdio.h>
int main()
{
    int i,n,s=0;
    printf("12+22+32+.....\n");
    printf("how many times you want to add:  ");
    scanf("%d",&n);
    for(i=12;i<=n*10+2;i=i+10)
    {
       s=s+i;
    }
    printf("sum of the seres is:  %d",s);
    return 0;
}
