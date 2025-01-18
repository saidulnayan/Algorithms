#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
       pro=pro*a[i];
   }
   printf("sum = %d\nproduct= %d\n",sum,pro);
   return 0;
}

