#include<stdio.h>
int main()
{
    int i=0,j=1,c,n,k;
    scanf("%d",&n);
    printf("%d%d",i,j);
    for(k=1;k<=n;k++)
    {
      c=i+j;
      i=j;
      j=c;
      printf("%d",c);
    }
    return 0;

}
