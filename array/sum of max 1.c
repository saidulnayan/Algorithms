#include <stdio.h>
int main()
{
    int i,j,a[50][50],sum=0,r,c,count=0,max=0;
    printf("row:");
    scanf("%d",&r);
    printf("\ncolumn:");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\na[%d][%d]   :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            while((a[i][j]-1)>-1)
            {
                count++;
            }

            if(a[i][j]==0)
        {

            if(count>max)
            {
            max=count;
            count=0;
            }
        }

        }



    }
    sum=sum+max;

     printf("%d",sum);
     return 0;
}

