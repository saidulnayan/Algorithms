#include<stdio.h>
int main()
{
    int n,i,x,c;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
           a[i]=0;
       }
       else
       {
           a[i]=1;
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}

