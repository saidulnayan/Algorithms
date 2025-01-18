#include <stdio.h>
void main()
{
    int i,n,sum;
    printf("\t\t1+2+3+4+5+.......n\n");
    printf("enter the last number of this series:\t");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("sum of your series is %d",sum);
    getch();
}
