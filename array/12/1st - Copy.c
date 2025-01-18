#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
