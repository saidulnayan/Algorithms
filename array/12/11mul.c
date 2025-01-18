#include<stdio.h>
int main()
{
    int r,c,m,n,k,i,j,sum=0;
    scanf("%d%d%d%d",&r,&c,&m,&n);
    int a[r][c],b[m][n],p[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r!=n)
    {
        printf("not possible\n");
    }
    else
    {
        for(i=0;i<r;r++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<m;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                p[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",p[i][j]);
            }
        }
    }
    return 0;
}
