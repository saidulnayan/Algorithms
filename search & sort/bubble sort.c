#include <stdio.h>
int main()
{
    int a[10],i,j,n,temp;

    while(1)
    {

    printf("\nenter the number of elements in the array :   ");
    scanf("%d",&n);
    if(n<=0)
        break;

    printf("enter %d numbers :\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     printf("ascending order array is :\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }


    }
    return 0;
}

