#include <stdio.h>

void sumArray(int A[])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+A[i];
    }
    printf("%d",sum);

}

int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    sumArray(a);
    return 0;
}


