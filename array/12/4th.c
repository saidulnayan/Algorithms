//4. C program to count total number of elements divisible by a specific number in an array.
#include<stdio.h>
int main()
{
    int n,i,x,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("the num\n");
    scanf("%d",&x);
     for(j=0;j<n;j++)
    {
        if(a[j]==x)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}

