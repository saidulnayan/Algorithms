#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the row wise value of your [3][3] matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];

        }
    }
    printf("sum of the elements of your matrix is:  %d",sum);
    return 0;
}
